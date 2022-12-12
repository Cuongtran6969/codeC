#include<stdio.h>
#include<math.h>
//#include<math.h>
int main() {
	float n;
	printf("Nhap vao mot so bat ky tu ban phim: ");
	scanf("%f", &n);
  if(n==(int)n) {
    	printf("%g la so nguyen", n);
    if((int)n%2==0) {
	printf("\n%g la so chan", n);
	    if((int)n%2==0 && n>0) {
	        printf("\n%g la so chan duong", n);	
		}else{
			printf("\n%g la so chan am ", n);
		}
   	}else{
   	printf("\n%g la so le", n);
   	if((int)n%2==1 && n>0) {
	        printf("\n%g la so le duong", n);	
		}else{
			printf("\n%g la so le am ", n);
		}
    }
}else{
  printf("%g khong phai la so nguyen", n);
	}
   float m = (int)sqrt(n);
   if(n==pow(m,2)) {
   	printf("\n%g la so chinh phuong", n);
   }else{
   	printf("\n%g khong phai la so chinh phuong", n);
   }
   if(n>0 && n<1000) {
   	int tram = (int)n/100%10;
	int chuc = ((int)n/10)%10;
	int donVi = ((int)n%10);
	int a = pow(tram,3);
	int b = pow(chuc,3);
	int c = pow(donVi,3);
	 if(a+b+c==n) {
	 	printf("\n%g la so dac biet", n);
	 }else{
	 	printf("\n%g khong phai la so dac biet", n);
	 }
   }else{
   		printf("\n%g khong phai la so dac biet", n);
   }
}
