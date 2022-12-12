#include"stdio.h"
int main() {
	int a[5] = {0}, x=2111223;
	while(x>10) {
		a[x%10-1]++;
		x/=10;
	}
	int i;
	for(i=0; i<5; i++) {
		printf("%d", a[i]);
	}

}
