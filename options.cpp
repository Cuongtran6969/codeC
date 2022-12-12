//
#include<stdio.h>
int main() {
	int x[100], n;
	
	int options;
while(1) {
	printf("\nChon 1 option: ");
	scanf("%d", &options);
	switch(options) {
	case 1:	
	printf("Nhap vao so phan tu (0<N<50) n: ");
	break;
	case 2:
	printf("Nhap vao tung gia tri: \n");
	break;
	case 3:
	printf("\ntim so lon nhat trong mang: ");
	break;
	case 4:
	printf("\ntim so nho nhat trong mang: ");
	break;
	case 11:
	printf("\nsap xep mang tang dan: ");
	break;
	default:
		printf("Khong co option nay");
  }
}
}
