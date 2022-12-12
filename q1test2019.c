#include "stdio.h"
int main() {
	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	
	if(a>b) {
		printf("float a>b");
	}else if(a<=b){
		printf("float a<=b");
	}
}
