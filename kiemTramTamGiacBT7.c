#include"stdio.h"
#include"math.h"
int main() {
	float a, b, c;
	printf("nhap vao gia tri canh A: ");
	scanf("%f", &a);
	printf("\nnhap vao gia tri canh B: ");
	scanf("%f", &b);
	printf("\nnhap vao gia tri canh C: ");
	scanf("%f", &c);

	if(a+b>c && a+c>b && b+c>a) {
		printf("\nABC la tam giac ");
		if(a==b || a==c || b==c) {
			printf("\nABC la tam giac can");
		} else{
			printf("\nABC khong phai la tam giac can");
		}
		if(a==b && a==c || b==a && b==c || c==a && c==b) {
		printf("\nABC la tam giac deu");
		} else{
	    printf("\nABC khong phai la tam giac deu");
		}
		if(sqrt(pow(a,2)+pow(b,2))== c || sqrt(pow(b,2)+pow(c,2))== a || sqrt(pow(a,2)+pow(c,2))== b) {
		printf("\nABC la tam giac vuong");
		} else{
	    printf("\nABC khong phai la tam giac vuong");
		}
     }else{
     	printf("\nABC khong phai la tam giac ");
	 }
  	
}
