#include"stdio.h"
#include"math.h"
int main() {
	int i, n, count = 0;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	//kt  SNT
//	for(i=2; i<=sqrt(n); i++) {
//		if(n%i==0) {
//			count++;
//		}
//	}
//	if(count==0) {
//		printf("la so nguyen to");
//	}else{
//		printf("khong phai la so nguyen to");
//	}
 //in ra sluong so nguyen to
 int j;
 for(i=1; i<=n;i++) {
 	count = 0;
 	for(j=2; j<=sqrt(i); j++) {
 		if(i%j==0) {
 			count++;
		 }
	 }
	if(count==0) {
		 	printf("%d ", i);
	}
 }




}
