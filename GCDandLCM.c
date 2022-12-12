#include "stdio.h"
#include "math.h"
int main(){
	int a, b, c, i, USCLN;	
	printf("Nhap vao 2 so nguyen a b: ");
	scanf("%d%d", &a, &b);
	a = abs(a);
	b = abs(b);
	int a2 = a;
	int b2 = b; 
	// TH1
	int mul = a*b;
	if(a>b) {
	  c = a;
	}else{
	  c = b;
	}
	if(a==0 || b==0){
		USCLN = (a+b);
	}else{
		//TH2
		while(a!=b){
			if(a>b){
				a = a-b;
			}else{
				b = b-a;
			}
		}
		USCLN = a;	
	}	
	printf("USCLN = %d", USCLN);
   
   	for(i=c; i<=mul; i++) {
		if(i%a2==0 && i%b2==0) {
			printf("BCNN = %d\n", i);
			break;
		}
	}
}
