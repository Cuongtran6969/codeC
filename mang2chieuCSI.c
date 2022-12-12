#include"stdio.h"
int main() {
	int i, j;
	int sum=0;
	int hang, cot; 
	int arr[100][100];
	do{
	printf("Nhap vao so hang: ");
	scanf("%d", &hang);	
	}while(hang>100);

    do{
    printf("\nNhap vao so cot: ");
	scanf("%d", &cot);
	}while(cot>100);
	fflush(stdin);

	for(i=0; i<hang; i++) {
		for(j=0; j<cot; j++) {
			printf("arr[%d][%d]=", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
    for(i=0; i<hang; i++) {
		for(j=0; j<cot; j++) {
			sum+=arr[i][j];
		}
	}
	printf("sum=%d", sum);
}
