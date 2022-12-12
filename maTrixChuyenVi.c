#include "stdio.h"
int main() {
	int m, n, i, j;
	int arr[100][100];
	printf("hang: ");
	scanf("%d", &m);
	printf("cot: ");
	scanf("%d", &n);
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\nMa tran chuyen vi\n");
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
}
