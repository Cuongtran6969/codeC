#include"stdio.h"
int main() {
	float arr[100];
	int i, j;
	float temp;
	for(i=0; i<5; i++) {
		scanf("%f", &arr[i]);
	}
	for(i=0; i<4; i++) {
		for(j=i+1; j<5; j++) {
			if(arr[j]>arr[i]) {
			  temp = arr[i];
			  arr[i] = arr[j];
			  arr[j] = temp;	
			}
		}
	}
	for(i=0; i<5; i++) {
		printf("%f ", arr[i]);
	}
}
