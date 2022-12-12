#include"stdio.h"
int main() {
	int arr[100], arr2[100], i, j, n;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	int dem, temp, count, k=0;
	for(i=0; i<n; i++) {
		temp = arr[i];
		dem=0;
		for(j=0; j<n; j++) {
			if(arr[i]==arr2[j]) {
				dem++;
			}
		}
		if(dem==0) {
			arr2[k] = temp;
			k++;
			count=0;
		 for(j=0; j<n; j++) {
			if(arr[i]==arr[j]) {
				count++;
			}
		  }
		 printf("\n%d-%d", arr[i], count);
		}

	}
}
