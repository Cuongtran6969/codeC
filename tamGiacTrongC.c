#include"stdio.h"
// tam giac vuong can , góc vuông phía duoi ben trai(triangle right angle)
void veTamGiac1(int n){  
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}

//*
//**
//***
//****
//*****



//tam giac vuong can , góc vuông phía tren ben trai
//void veTamGiac2(int n){  
//	int i, j;
//	for(i = 0; i < n; i++){
//		for(j = 0; j < n - i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//*****
//****
//***
//**
//*



// tam giac vuong can goc ben phai phia duoi
//void veTamGiac3(int n){
//	int i, j;
//	for(i = 0; i < n; i++){
//        for(j = 0; j < n - i - 1; j++){
//            printf(" ");
//		}
//		for(j = 0; j < i + 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//    *
//   **
//  ***
// ****
//*****




// Ve tam giac vuong can goc ben phai phia tren
void veTamGiac4(int n){
	int i, j;
	for(i = 0; i < n; i++){
			for(j = 0; j < i; j++){
					printf(" ");
			}
			for(j = 0; j < n - i; j++){
				printf("*");
			}
			printf("\n");
		}
}

//*****
// ****
//  ***
//   **
//    *

   
int main() {
	int n, m;
	printf("Nhap so luong hang: ");
	scanf("%d", &n);
	int i, j;
//	tam giac vuong 
//	veTamGiac1(n);
//	printf("\n");
//	veTamGiac2(n);
//	printf("\n");
//	veTamGiac3(n);
//	printf("\n");
	veTamGiac4(n); 
	 
	
	//tam giac deu, hinh vuong
	
	
	//tam giac deu
//	for(i=0; i<n; i++) {
//		for(j=0; j<n-i; j++) {
//			printf(" ");
//		}
//		for(j=0; j<=i; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
	
//	   *
//    * *
//   * * *
//  * * * *
// * * * * *


  //tam giac deu nguoc  
//   for(i=0; i<n; i++) {
//   	for(j=0; j<i; j++) {
//		printf(" ");
//	}
//   	for(j=n; j>i; j--) {
//   		printf("*");
//	   }
//
//	printf("\n");
//   }
   
//* * * * *
// * * * *
//  * * *
//   * *
//    *

   
//in hinh cn kt m*n
//   printf("Nhap vao so cot: ");
//   scanf("%d", &m);
//
//   for(i=0; i<n; i++) {
//   	for(j=0; j<m; j++) {
//   		printf("* ");
//	   }
//	   printf("\n");
//   }
//* * * * * *
//* * * * * *
//* * * * * *
//* * * * * *
//* * * * * *

   
 
 //in ra hinh chu nhat rong
//    printf("Nhap so luong cot: ");
//	scanf("%d", &m);
//   for(i=0; i<n; i++) {
//   	if(i==0 || i==n-1) {
//	 for(j=0; j<m; j++) {
//		printf("*");
//	 }
//	 printf("\n");
//	}else{
//   	 printf("*");
//	  for(j=0; j<m-2; j++) {
//		printf(" ");
//	  }
//	 printf("*");
//	 printf("\n");	
//	} 
//   }  
//   
//******
//*    *
//*    *
//*    *
//******
   
   //hinh vuong canh n
//       for (i=0; i<n; i++)
//    {
//        for (j=0; j<n; j++)
//        {
//            if (i == 0 || i == n-1 || j == 0 || j == n-1)
//              printf("*");
//            else 
//              printf(" ");
//        }
//        printf("\n");
//    }
   
   

   //tam giac can rong
//   int k = 1;
//   for(i=0; i<n; i++) {
//   	
//   	for(j=n; j>i+1; j--) {
//   		printf(" ");
//	   }
//	if(i==0) {
//		printf("*");
//		printf("\n");
//	}
//	if(i>0 && i<n-1) {
//		printf("*");
//		for(j=0; j<k; j++) {
//			printf(" ");
//		}
//		k+=2;
//		printf("*");
//		printf("\n");
//	}
//	if(i==n-1) {
//		for(j=0; j<2*n-1; j++) {
//			printf("*");
//		}
//	}
//   }
//    *
//   * *
//  *   *
// *     *
//*********
   

//hinh tam giac rong nguoc   
int k = 2*(n-1)-1;
int f=n;
for(i=n; i>0; i--) {
  for(j=n; j>i; j--) {
  	printf(" ");
  }
	if(i==n) {
		for(j=0; j<(2*n)-1; j++) {
			printf("*");		
		}	
		printf("\n");	
	}
	if(i<n && i>1) {
		printf("*");
		for(j=0; j<k-2; j++) {
			printf(" ");
		}
		k-=2;
		printf("*");
		printf("\n");
	}
	if(i==1) {
		printf("*");
		printf("\n");
	}	
}
//*********
// *     *
//  *   *
//   * *
//    *


//   
//hinh thooi rong
//  for(i=0; i<n; i++) {
//  	if(i>=0 && i<=n/2) {
//  	  	for(j=n/2; j>i; j--) {
//  		printf(" ");	
//	  }
//     }
//    if(i>n/2 && i<=n-1) {
//  	 for(j=n/2; j<i; j++) {
//  		printf(" ");	
//	  }
//	}
//
//	if(i==0) {
//		printf("*");
//		printf("\n");
//	}
//	if(i>0 && i<=n/2) {
//		printf("*");
//		for(j=0; j<(2*i)-1; j++) {
//			printf(" ");
//		}
//		printf("*");
//		printf("\n");
//	}
// 	 if(i>n/2 && i<n-1) {
//		printf("*");
//		for(j=0; j<2*(n-i-1)-1; j++) {
//			printf(" ");
//		}
//		printf("*");
//		printf("\n");
//	}	
//	if(i==n-1) {
//		printf("*");
//		printf("\n");
//	}
//  }
}
