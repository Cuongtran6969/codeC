#include<stdio.h>
int main() {
	int x[100], n;
	int temp;
	int i, j;
	printf("Nhap vao n: ");
	scanf("%d", &n);
for(i=0; i<n;i++) {
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
 }
	printf("\nXuat Mang: ");
     for(i=0; i<n;i++) {
		printf("%d ", x[i]);
}
    printf("\nsap xep mang tang dan: ");
	for(i=0; i<n-1;i++) {
		for(j=i+1; j<n;j++) {
            if(x[j]<x[i]) {
            	temp = x[i];
            	x[i] = x[j];
            	x[j] = temp;
			}
	}
   }
	for(i=0; i<n;i++) {
		printf("%d ", x[i]);
	}
}

