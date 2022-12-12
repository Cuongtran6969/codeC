#include"stdio.h"
int main() {
  int i, n;
  int dem = 0;
  int product = 1;
  do{
  	scanf("%d", &n);
  }while(n<0);
  
  for(i=2; i<=(int)n/2; i++) {
  	if(i%2==0) {
  	dem++;
  	 product*=i;	
	}
  }
  if(dem!=0) {
  	printf("\n%d", product);
  }

}
