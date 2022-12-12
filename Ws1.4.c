#include<stdio.h>
int main() {
	int x, y;
	do{
		printf("\nInput x = ");
		scanf("%d", &x);
		printf("Input y = ");
		scanf("%d", &y);
		int temp = x;
		x=y;
		y=temp;
		printf("x = %d, y=%d",x,y);
	}while(x!=0 || y!=0);
}
