#include"stdio.h"
void demSoLanXuatHien(int arr[], int n) {
	int i, j, k=0, temp, dem=0, count=0;
	int arr2[100];
	for(i=0; i<n; i++) {
		temp=arr[i];
		dem=0;
		for(j=0; j<n; j++) {
			if(temp==arr2[j]) {
				dem++;
			}
		}
		if(dem==0) {
			arr2[k]=temp;
			k++;
			count=0;
			for(j=0; j<n; j++) {
				if(temp==arr[j]) {
					count++;
				}
			}
			printf("%d xuat hien %d lan\n", temp, count);
		}

	}
}
int main() {
	int n, arr[100], i, j, p;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}

	demSoLanXuatHien(arr,n);
//    for(i=0; i<n; i++) {
//    	if(i%2==1) {
//    		for(j=i; j<n; j++) {
//    			arr[j] = arr[j+1];
//    			n--;
//			}
//		}
//	}
//	printf("\nsau khi xoa: \n");
//	for(i=0; i<n; i++) {
//		printf("%d ", arr[i]);
//	}
    for(i=n-1; i>=0; i--) {
  	  if(i%2==0) {
  	    for(j=i; j<n-1; j++) {
  	    	arr[j] = arr[j+1];
		  } 	
		  n--;
	 } 
    } 
	for(i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
}
