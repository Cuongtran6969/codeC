#include "stdio.h"
int main() {
	int i, j, k, n;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
	j=n;
	k=0;
	 while(i>k) {
	  	printf(" ");
	  	k++;
	  }
	  while(j>0 && j>i) {
	  	printf("*");
	  	j--;
	  }

	  printf("\n");
	}
}
