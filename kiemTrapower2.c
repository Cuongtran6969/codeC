#include"stdio.h"
#include"math.h"
int main() {
	int n, i;
	scanf("%d", &n);
	int temp=0;
	for(i=1; i<n; i++) {
		if(pow(2, i)==n) {
		 temp = i;
		 break;
		}
	}
	if(temp==0) {
		printf("is not");
	}else{
		printf("%d", temp);
	}
} 
