#include"stdio.h"
int main() {
	int arr[100];
	int i, j=0;
	for(i=0; i<7; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\nOUTPUT:\n");
	int count;
    int arr2[100];
    int tk;
	for(i=0; i<7; i++) {
	 tk = arr[i];
	 count=0;
	 for(j=0; j<7; j++) {
	 	if(tk==arr[j]) {
     	count++;
	 } 	 	
	}
	//printf("\nso %d xuat hien %d lan",arr[i], count);
		 arr2[i]=count; 	
  }
  int flat;
  int countMax = 1;
  for(i=0; i<7; i++) {	
  	if(arr2[i]>countMax && arr[i]>=10) {
  	 countMax = arr2[i];
  	 flat=i;
	}
  }
  //printf("\ncountmax = %d", countMax);
  int address;
  if(countMax!=1) {
  	for(i=0; i<7; i++) {
  	if(arr2[i]==countMax) {
  	//lay ra cac so co so lan xuat hien bang nhau
	 if(arr[i]>=10 && arr[i]!=address) {
	 	//ktra so 2 chu so va no khac voi so trc do tranh in ra nh lan
	 	printf("%d ", arr[i]);
	 	address=arr[i];
	 }	  
   }
  }
 }else{
  	printf("no two-digit number");
 }
}

