#include"stdio.h"
#include"stdlib.h"
#include"string.h"
 
//void swap(int *a, int *b)
//{
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//
//int partition (int arr[], int low, int high)
//{
//    int pivot = arr[high];    // khai báo ph?n t? ðánh dâu pivot
//    int left = low;   //khai báo bi?n bên trái
//    int right = high - 1; //khai báo bi?n bên ph?i
//    while(1){
//        while(left <= right && arr[left] < pivot) {
//        	 left++;
//		}
//        while(right >= left && arr[right] > pivot) {
//            right--; 	
//		}
//        if (left >= right){
//        	 break
//		}; 
//        swap(&arr[left], &arr[right]); 
//        left++;
//        right--;
//    }
//    swap(&arr[left], &arr[high]);
//    return left;
//}
//  
//void quickSort(int arr[], int low, int high)
//{
//    if (low < high){
//        int index = partition(arr, low, high);
//        quickSort(arr, low, index - 1);
//        quickSort(arr, index + 1, high);
//    }
//}
//void printArray(int arr[], int size)
//{
//    int i;
//    for (i=0; i < size; i++){
//        printf("%d ", arr[i]);
//      }
//}
// 
   int checkPass(float diemC, float diemPython, char gender[50]) {
	int result;
	float diemTb = ((diemC*2)+diemPython)/3;
	if(diemTb>=5) {
		result = 1;
	}else if(diemTb<5 && strcmp(gender,"Nam")==0) {
		result = 0;
	}else if(diemTb<5 && strcmp(gender,"Nu")==0) {
		result = 1;
	}
	return result;
}
int main(){
  float diemC = 1;
  float diemPython = 2;
  char gender[] = "Nu";
  int result = checkPass(diemC, diemPython, gender);
//  if(result==1) {
//  	printf("dau");
//  }else{
//  	printf("truot");
//  }
  checkPass(diemC, diemPython, gender)==1?printf("dau"):printf("truot");
}
