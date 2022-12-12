#include<stdio.h>
#include<stdlib.h>

void swap(int* b, int* c) {
	// *b mamg gia tri cua b => *b chung vung nho voi b
	// *c chung vung nho voi c.
	// *b = 5
	// *c = 10
	int temp;
	temp = *b; // temp = 5 
	*b = *c;   // *b = 10 => b = 10
	*c = temp; // *c = 5 => c = 5
	
}

void dinhNghia(float* d) {
	printf("\nNhap vao mot gia tri: ");
	scanf("\n%f", &d);
	
}

void inputData(float p1[], int size) {
	int i;
    printf("\nInput data for array: ");
    for(i = 0; i < size; i++) {
    	printf("\np1[%d] = ", i);
    	scanf("\n%f", p1 + i);
	}
}
    


int main() {
	
// Con tro (Pointer): 
// 1. Dung de luu tru dia chi cua bien khac => Dung chung vung nho.
// 2. Dung nhu la mang.
// 3. Cap phat vung nho.

// * Luu tru dia chi bien khac:
// Khai bao con tro:
// kieu_du_lieu* ten_con_tro;
// kieu_du_lieu *ten_con_tro;
   int* p; // p: con tro.
   int a = 10;
   p = &a; 
// *p va a se cung chua 1 gia tri => Chung vung nho. 
   printf("\n%d", *p);
   a = 20;
   printf("\n%d", *p);
   *p = 30;
   printf("\n%d", a);
   int b, c;
   b = 5;
   c = 10;
   swap(&b, &c);
   printf("\nb = %d, c = %d", b, c); 
// float d;
   // Yeu cau: Hay dinh nghia 1 ham de nhap d (dung ky thuat con tro).
// dinhNghia(&d);
// printf("\nd = %g", d);
   
   
// *Con tro dong vai tro la mang:
   float* p1;    // p1: Mang 1 chieu
   double** p2; // p2: Mang 2 chieu
   // p1, p2 chua duoc cap phat vung nho
   float arr[5];
// *Cap phat vung nho: 
   int size = 5;
   p1 = (float*)malloc(size * sizeof(float)); // malloc(): Cap phat vung nho nhung khoi tao gia tri ban dau cho cac phan tu la bat ky
// printf("\n%g", p1[0]);
// p1 = (float*)calloc(size, sizeof(float)); 
// calloc(); Cap phat vung nho va khoi tao gia tri 0 ban dau cho cac phan tu
   
   inputData(p1, size);
   int i;
   for(i = 0; i < size; i++) {
   	printf("\n%g", p1[i]);
   }
//   realloc(p1, 7 * sizeof(float));
   // Cap phat them vung nho, nhung phan tu cu van giu lai gia tri cu.
//   for(i = 0; i < 7; i++) {
//   	printf("\n%g", p1[i]);
//   }
//   realloc(p1, 0);
    // Huy vung nho cua p1
//   free(p1); 
   // Huy vung nho cua p1
}

