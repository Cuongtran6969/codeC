#include<stdio.h>
int main() {
	int th;
	int n;
	printf("Nhap vao mot thang bat ky: ");
	scanf("%d", &th);
	printf("Nhap vao nam: ");
	scanf("%d", &n);
		switch(th) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Thang %d co 31 ngay", th);
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		     printf("Thang %d co 30 ngay", th);
		break;
		case 2:
			if(n%4==0 && n%100!=0) {
				printf("Thang %d co 29 ngay", th);
			}else{
				printf("Thang %d co 28 ngay", th);
			}
	}
}
