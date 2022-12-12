#include<stdio.h>
#include"math.h"
int main() {
	float a;
	float b;
	printf("nhap vao cac gia tri cua phuong trinh ax+b=0");
	printf("\na = ");
	scanf("%f", &a);
	printf("\nb = ");
	scanf("%f", &b);
	if(a==0) {
	  if(b==0) {
	  	printf("Phuong trinh vo so nghiem");
	  }else{
	  	printf("Phuong trinh vo nghiem");
	  }
	}else{
		printf("Phuong trinh co 1 nghiem x=%g", -b/a);
	}
	float c;
	float x1, x2;
	printf("\nnhap vao cac gia tri cua phuong trinh ax^2+bx+c");
	printf("\na = ");
	scanf("%f", &a);
	printf("\nb = ");
	scanf("%f", &b);
	printf("\nc = ");
	scanf("%f", &c);
	float denlta = pow(b,2)-(4*a*c);
	if(denlta>0) {
		x1 = (-b + sqrt(denlta))/(2*a);
		x2 = (-b - sqrt(denlta))/(2*a);
		printf("phuong trinh co 2 nghiem: x1=%.2f  x2=%.2f", x1, x2);
	} else if(denlta==0) {
		x1=-b/(2*a);
		printf("phuong trinh co 2 nghiem kep: x1=x2=%.2f", x1);
	} else {
		printf("phuong trinh vo nghiem");
	}
} 
