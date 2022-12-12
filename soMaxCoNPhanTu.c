#include"stdio.h"
int main() {
	int arr[100];
	int i, j, k;
	int n;
	printf("Nhap vao so phan tu: ");
	scanf("%d", &n);
	//nhap mang
	for(i=0; i<n; i++) {
	 scanf("%d", &arr[i]);
	}
	//nhap k
	printf("\nNhap vao k: ");
	scanf("%d", &k);
	int max;
	//max nhat
	for(i=0; i<n; i++) {
		if(arr[i]>max) {
			max = arr[i];
		}
	}
    int maxReduce = max;
    int temp=0;
    int total = max;
    printf("%d element are ", k);
    //tim kiem cac so gan max nhat 
    //giam di max va tim so trong mang gan max--
    do{
    	//moi lan tim thi giam di max
    maxReduce--;
     for(i=0; i<n; i++) {  
        if(arr[i]==maxReduce) {
     	  printf("%d, ", arr[i]);
     	  total+=arr[i];
     	  //dk temp de xd 2 so thoa man
     	  temp++;
	   }
      }  
      //temp xd 2 so thoa man (k-1 so thoa man va max la 1 trong cac so tm)
	}while(temp!=k-1);
	printf("%d ", max);
	printf("and total is %d", total);
}
