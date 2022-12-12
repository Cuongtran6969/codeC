#include"stdio.h"
int main(){
	int n, i;
	Nhap:
		printf("\n Nhap n = ");
		scanf("%d", &n);
	if(n<=0) goto Nhap;
	
	printf("\nDay so le:");
	for(i=1; i<=n; i++){
		if (i%2==0) continue;
		printf("\n%d",i);
	}
}

