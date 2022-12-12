#include<stdio.h>
int main() {
	int x, sum=0;
	do{
		printf("Input integers x: ");
		scanf("%d", &x);
		if(x!=0) {
			sum=sum+x;
		}
	}while(x!=0);
	printf("\nSum=%d", sum);
}
