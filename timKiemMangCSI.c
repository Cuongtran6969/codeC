#include"stdio.h"
int main() {
	int i, n;
	int arr[100];
	int search, flag=0;
	printf("Nhap mang so luong phan tu: n = ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		printf("arr[index=%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("\nNhap vao phan tu can tim kiem: x = ");
	scanf("%d", &search);
	
	for(i=0; i<n; i++) {
		if(arr[i]==search) {
			flag=1;
			break;
		}
	}
	if(flag==1) {
		printf("\nTim thay x=%d tai vi tri index = %d", search, flag);
	}else{
		printf("\nKhong tim thay x=%d", search);
	}
}
