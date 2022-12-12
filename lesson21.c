#include<stdio.h>
void nhapMang(int arr[], int n) {
	int i;
	for(i=0; i<n; i++) {
	  printf("\nPhan tu thu %d :arr[%d]=",i+1,i);
	  scanf("%d", &arr[i]);
	}
}
void xuatMang(int arr[], int n) {
	int i;
	printf("Xuat mang:");
	for(i=0; i<n; i++) {
	  printf("%d ", arr[i]);
	}
}
void nhapMang2Chieu(int arr1[10][10], int row, int column) {
	int i, j;
	printf("\nNhap vao mang 2 chieu: \n");
	for(i=0; i<row; i++) {
		for(j=0; j<column;j++) {
			printf("\narr1[%d][%d]",i, j);
			scanf("%d", &arr1[i][j]);
		}
	}
}
void xuatMang2Chieu(int arr1[10][10], int row, int column) {
	int i, j;
	printf("\nXuat mang 2 chieu: \n");
	for(i=0; i<row; i++) {
		for(j=0; j<column;j++) {
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int arr[50], arr1[2][3];
	int n;
	printf("\nNhap vao do dai cua arr: ");
	scanf("%d", &n);	
	nhapMang(arr, n);
	xuatMang(arr, n);
	int row, column;
	printf("\nNhap vao so row: ");
	scanf("%d", &row);
	printf("\nNhap vao so column: ");
	scanf("%d", &column);
	nhapMang2Chieu(arr, row, column);
	xuatMang2Chieu(arr, row, column);
	//&arr[2] = arr+2	
} 
