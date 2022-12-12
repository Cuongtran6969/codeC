#include<conio.h>
#include<stdio.h>
int main() {
	int n;
	int soDu;
	int s = 0;
	int arr[100];
	printf("Nhap n: ");
	scanf("%d",&n);
	int i=0;
	//tach lay cac so hang don vi
	//123456
	//6 5 4 3 2 1 
	while(n!=0) {
		soDu = n % 10;
		s += soDu;
		n /= 10;
		i++;
		arr[i] = soDu;
	}
	int j, k=0, m=0, temp, dem, count, arr4[100];
	for(j=i; j>0; j--) {
		temp = arr[j];
		dem=0;
		//kiem tra neu temp da xhien thi dem>0
		for(k=0;k<i; k++) {
			if(temp==arr4[k]) {
				dem++;
			}
		}
		//neu chua xuat hien thi gan vao arr4
		//roi so sanh so lan xuat hien
		if(dem==0) {
			arr4[m]=temp;
		    m++;
		    count=0;
			for(k=i; k>0; k--) {
				if(temp==arr[k]) {
					count++;
				}
			}
			printf("\n%d xuat hien %d lan", temp, count);	
		}
	}

}
