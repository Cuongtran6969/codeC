#include<stdio.h>
#include<math.h>
int main() {
	float x[100];
	int n;
	int temp;
	int options;
	int i, j;
	int viTriMin;
    float min, max;
	float maxDuong, minLe;
	int timThay =0, soPhanTu =0;
	float sum = 0, trungBinhCong=0;
	printf("\n1. Nhap mot ao Nguyen (0<N<50)");
	printf("\n2. Nhap mot mang gom N so thuc");
	printf("\n3. Tim so lon nhat trong mang");
	printf("\n4. Tim so nho nhat trong mang");
	printf("\n5. Tim so duong chan nho nhat trong mang");
	printf("\n6. Tim so am le trong mang");
	printf("\n7. Tim so chinh phuong trong mang");
	printf("\n8. Tim tong cua mang");
	printf("\n9. Tim trung binh cong cac phan tu trong mang");
	printf("\n10. Tim nhung nhung phan tu lon hon Tbc");
	printf("\n11. sap xep mang theo trat tu tang gian");
	printf("\n12. Sap xep mang theo trat tu giam dan");
	printf("\n13. In trung binh cong cac phan tu khong am cua day");
	printf("\n**** Nhap n=0 de thoat chuong trinh ****");
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
	printf("Nhap vao tung gia tri: \n");
	for(i=0; i<n;i++) {
		printf("Phan tu thu %d:", i+1);
		scanf("%f", &x[i]);
	}
	for(i=0; i<n;i++) {
		printf("%g ", x[i]);
	}
	break;
	case 3:
	printf("\ntim so lon nhat trong mang: ");
	max = x[0];
	for(i=0; i<n;i++) {
		if(x[i]>max) {
			int temp = max;
			max = x[i];
			x[i] = temp;
		}
	}
	printf("\nMax = %g", max);
	break;
	case 4:
	min = x[0];
	printf("\ntim so nho nhat trong mang: ");
	for(i=0; i<n;i++) {
		if(x[i]<min) {
			temp = min;
			min = x[i];
			x[i] = temp;
		}
	}
	printf("\nMin = %g", min);
	break;
	case 5: 
	for(i=0; i<n;i++) {
		if(x[i]>0 && (int)x[i]%2==0 && x[i]==(int)x[i] && x[i]>maxDuong) {
		 maxDuong = x[i];
		}
	}
		if(maxDuong == 0) {
			printf("\nKhong co so duong chan");
		} else {
		    printf("\nSo duong chan max: %g", maxDuong);	
		}
	break;
	case 6:
		for(i=0; i<n;i++) {
		if(x[i]<0 && (int)x[i]%2!=0 && x[i]==(int)x[i] && x[i]<minLe) {
		 minLe = x[i];
		}
	}
		if(minLe == 0) {
			printf("\nKhong co so le min");
		} else {
		    printf("\nSo am le min: %g", minLe);	
		}
	break;
	case 7: 
	printf("\nCac so chinh phuong: ");
	for(i =0; i<n; i++) {
		temp = (int)sqrt(x[i]);
		if(x[i]> 0 && x[i]==pow(temp,2)) {
			printf("\n%g", x[i]);
			timThay = 1;
		}
	}
	if(!timThay) {
		printf("\nKhong tim thay so chinh phuong");
	}
	break;
	case 8:
		for(i=0;i<n;i++) {
			sum+=x[i];
		}
		printf("Tong cac phan tu trong mang = %g", sum);
	break;
	case 9:
		for(i=0;i<n;i++) {
			sum+=x[i];
		}
		printf("Trung binh cong cac phan tu trong mang = %g", (float)sum/n);
		break;
	case 10:
		for(i=0;i<n;i++) {
			sum+=x[i];
			soPhanTu++;
		}
		trungBinhCong = sum/soPhanTu;
		printf("\nPhan tu lon hon Trung binh cong: ");
		for(i=0; i<n;i++) {
			if(x[i]>trungBinhCong) {
				printf("%g ", x[i]);
				timThay = 1;
			}
		}
		if(!timThay) {
			printf("\nKhong co so nao lon hon trung binh cong");
		}
		break;
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
		printf("%g ", x[i]);
	}
	break;
	case 12:
	printf("\nsap xep mang giam dan: ");
	for(i=0; i<n-1;i++) {
		for(j=i+1; j<n;j++) {
            if(x[j]>x[i]) {
            	temp = x[i];
            	x[i] = x[j];
            	x[j] = temp;
			}
	}
}
	for(i=0; i<n;i++) {
		printf("%g ", x[i]);
	}
	break;
	case 13:
	for(i=0;i<n;i++) {
		if(x[i]>0 && x[i]==(int)x[i]) {
			sum+=x[i];
			(float)soPhanTu++;
		}
	}
	printf("\nTrung binh cong cac phan tu khong am: %g", sum/soPhanTu);
	break;
	case 0:
		 printf("***Chuong trinh da duoc thoat***");
		return 0;
		break;
	default:
		printf("Khong co option nay\n");
  }
 }
}
