#include<stdio.h>
int main() {
	int x[100], n;
	int temp;
	int options;
	int i, j;
	int viTriMin;
	int min, max;
//	printf("\n1. Nhap mot ao Nguyen (0<N<50)");
//	printf("\n2. Nhap mot mang gom N so thuc");
//	printf("\n3. Tim so lon nhat trong mang");
//	printf("\n4. Tim so nho nhat trong mang");
//	printf("\n5. Tim so duong chan nho nhat trong mang");
//	printf("\n6. Tim so am le trong mang");
//	printf("\n7. Tim so chinh phuong trong mang");
//	printf("\n8. Tim tong cua mang");
//	printf("\n9. Tim trung binh cong cac phan tu trong mang");
//	printf("\n10. Tim nhung nhung phan tu lon hon Tbc");
//	printf("\n11. sap xep mang theo trat tu tang gian");
//	printf("\n12. Sap xep mang theo trat tu giam dan");
//	printf("\n13. In trung binh cong cac phan tu khong am cua day");
while(1) {
	printf("\nChon 1 option: ");
	scanf("%d", &options);

	switch(options) {
	case 1:	
	do{
	printf("Nhap vao so phan tu (0<N<50) n: ");
	scanf("%d", &n); 
	}while(n<0 || n>50);
	break;
	case 2:
	printf("Nhap vao tung gia tri2: \n");
	for(i=0; i<n;i++) {
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
	}
	for(i=0; i<n;i++) {
		printf("%d ", x[i]);
	}
	break;
//	case 3:
//	printf("\ntim so lon nhat trong mang: ");
//	max = x[0];
//	for(i=0; i<n;i++) {
//		if(x[i]>max) {
//			int temp = max;
//			max = x[i];
//			x[i] = temp;
//		}
//	}
//	printf("\nMax = %d", max);
//	break;
//	case 4:
//		min = x[0];
//	printf("\ntim so nho nhat trong mang: ");
//	for(i=0; i<n;i++) {
//		if(x[i]<min) {
//			temp = min;
//			min = x[i];
//			x[i] = temp;
//		}
//	}
//	printf("\nMin = %d", min);
//	break;
	case 11:
	printf("\nsap xep mang tang dan: ");
	for(i=0; i<n-1;i++) {
		for(j=i+1; j<n;j++) {
            if(x[j]<x[i]) {
            	temp = x[i];
            	x[i] = x[j];
            	x[j] = temp;
			}
	}
}
	for(i=0; i<n;i++) {
		printf("%d ", x[i]);
	}
	break;
	default:
		printf("Khong co option nay");
  }
 }

}
