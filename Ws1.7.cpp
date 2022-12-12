#include<stdio.h>
int main() {
	char c1, c2;
	printf("Input c1 = ");
	scanf("%c", &c1);
	fflush(stdin);
    printf("Input c2 = ");
	scanf("%c", &c2);
	if((int)c1>(int)c2) {
		int temp=c1;
		c1=c2;
		c2=temp;
	};
	int d=c2-c1;	
	for(int c=c1; c<=d;c++) {
		printf("%c : %d, %o, %X\n",c,c,c,c);
	}
}
