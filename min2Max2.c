#include"stdio.h"
#include "limits.h"
int a[100];
int n;

void nhapMang(int x[100], int *n){
	int i;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &*n);
	for(i=0; i<*n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[100], int n){
	int i;
	printf("Gia tri cua mang la: ");
	for(i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

int timMinThuHai(int x[100], int n){
	int min = INT_MAX;
	int min_2 = INT_MAX;
	int i;
	for(i =0 ; i<n; i++){
		if(x[i]<min)
			min = x[i];
	}
	
	for(i=0; i<n; i++){
		if (x[i]==min){
			continue;
		}else{
			if(x[i]<min_2){
				min_2 = x[i];
			}
		}
	}
	return min_2;
} 

int timMaxThuHai(int x[100], int n){
	int max = INT_MIN;
	int max_2 = INT_MIN;
	int i, j;
	for(i =0 ; i<n; i++){
		if(x[i]>max)
			max = x[i];
	}
	
	for(i=0; i<n; i++){
		if (x[i]==max){
			continue;
		}else{
			if(x[i]>max_2){
				max_2 = x[i];
			}
		}
	}
	return max_2;
} 

int main(){
	nhapMang(a, &n);
	xuatMang(a, n);
	printf("\n");
	printf("Min_2 = %d", timMinThuHai(a, n));
	printf("\n");
	printf("Max_2 = %d", timMaxThuHai(a, n));
}
