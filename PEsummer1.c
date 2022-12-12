#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	//bt1
//	float x;
//	scanf("%f", &x);
//	printf("\nOUTPUT:\n%.3f",x*4);
    
	//bt2
    
//    int i, sum=0;
//    int arr[100];
//    for(i=0; i<6; i++) {
//      scanf("%d", &arr[i]);	
//	}
//	for(i=0; i<6; i++) {
//      if(arr[i]%2==0) {
//      	sum+=arr[i];
//	  }
//	}
//	printf("\nOUTPUT:\n%d",sum);
    
    //bt3
        
//    int i, j, temp;
//	int n, sum=0;
//    int arr[100];
//    scanf("%d", &n);
//    for(i=0; i<n; i++) {
//      scanf("%d", &arr[i]);	
//	}
//    for(i=0; i<n-1; i++) {
//      for(j=i+1; j<n; j++) {
//      	if(arr[j]<arr[i]) {
//      		temp = arr[i];
//      		arr[i] = arr[j];
//      		arr[j] = temp;
//		  }
//	  }
//	}
//	printf("\nOUTPUT:");
//	for(i=0; i<n; i++) {
//      if(arr[i]%2==1 || arr[i]%2==-1) {
//      	printf("\n%d", arr[i]);
//	  }	
//	}

//   b4.1 tam giac 1 cach 1

//    int rows;
//    int i, j=0;
//    scanf("%d", &rows);
//    printf("\nOUTPUT:\n");
//    for(i=0;i<rows;i++) {
//    	j=1;
//      while(j<=i+1) {
//      	printf("%d ", j);
//      	j++;
//	  }
//	  printf("\n");
//	}

//   b4.1 tam giac 1 cach 2

//   int i, n;
//   char s[100] = "";
//   scanf("%d", &n);
//   for(i=0; i<n; i++) {
//   	s[i]='*';
//   	printf("%s\n", s);
//   }

    //   b4.2 tam giac 2
    
//    int rows;
//    char str[] = {};
//    int i, j, k=0;
//    scanf("%d", &rows);
//    for(i=rows; i>0; i--) {
//    	j=rows;
//    	while(j>i) {
//    	   printf("  ");
//    	   j--;
//		}
//		k=1;
//		while(k<=i) {
//			printf("* ", );
//			k++;
//		}
//	  printf("\n");
//	}

//   b5

//void deleteElement(int arr[100], int *n, int x) {
//    	int i=0;   	
//    	for(i=x; i<=*n; i++) {
//    	  arr[i] = arr[i+1];
//		}
//	}
//    int arr[100];
//    int i, j, n;
//    scanf("%d", &n);
//    for(i=0; i<=n; i++) {
//      scanf("%d", &arr[i]);
//	}
//	for(i=0; i<=n; i++) {
//		if(arr[i]>=0 && arr[i]<=n) {
//			deleteElement(arr,&n,i);
////		  for(j=i; j<=n; j++) {
////    	    arr[j] = arr[j+1];
//    	    n--;
////		  }
//		}
//	}
//	printf("\nOUTPUT: ");
//	for(i=0; i<=n; i++) {
//      printf("%d ", arr[i]);
//	}
      
//      BT6

//    char s[100];
//    int i;
//    gets(s);
//    for(i=0; i<strlen(s); i++) {
//      if(i%2==1) {
//      	if(s[i]>=97 && s[i]<=122) {
//      		s[i]-=32; 
//		  } 
//	   }
//	}
//	printf("\nOUTPUT: \n");
//	puts(s);

//      BT7

//    int arr[100];
//    int i, n;
//    scanf("%d", &n);
//    for(i=0; i<n; i++) {
//      scanf("%d", &arr[i]);
//	}
//    for(i=0; i<n; i++) {
//      if(arr[i]%2==0) {
//      	arr[i]*=arr[i];
//	  }
//	}
//	printf("\nOUTPUT:");
//	for(i=0; i<n; i++) {
//      if(arr[i]%2==0) {
//      	printf("\n%d", arr[i]);
//	  }
//	}
//      BT7

//  int n, flat=0;
//  printf("Nhap vao so tu nhien n: ");
//  scanf("%d", &n);
//  int x = 1;
//
//   while(x<n) {
//   	x*=2;
//  	flat++;
//   }
// if(pow(2,flat)==n){
// 	printf("\n%d", flat);
// }else if(pow(2,flat)>n) {
// 	printf("%d is no a power of 2", n);
// }else if(pow(2,flat)<n){
// 	printf("%d is no a power of 2", n);
// }

//BT9
//    char str[100];
//    int i;
//    gets(str);
//    printf("\nOUTPUT: \n");
//    for(i=0; i<strlen(str); i++) {
//      if(str[i]>=65 && str[i]<=90 || str[i]>=92 && str[i]<=122) {
//      	printf("%c", str[i]);
//	  }
//	}
}


