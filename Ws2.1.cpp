#include<stdio.h>
void nhapLieu(float number1, float number2) {
	printf("Nhap vao gia tri number1: ");
	scanf("%f", number1);
	printf("\nNhap vao gia tri number2: ");
	scanf("%f", number2);
}
//float tinhTong(float number1, float number2) {
//	float sum = number1 + number2;
//	return sum;
//}
//float tinhHieu(float number1, float number2) {
//	float minus;
//	if(number1>number2) {
//	   minus = number1 - number2;
//	}else{
//	   minus = number2- number1;
//	}
//	return minus;
//}
//float tinhNhan(float number1, float number2) {
//	float product;
//	product = number1*number2;
//}
int main() {
	float number1, number2;
	nhapLieu(number1, number2);
	printf("number1 = %f, number2 = %f", number1, number2);
//	printf("Tong cua number1 va number 2");
//	tinhTong(number1, number2);
//	printf("Hieu cua number1 va number 2");
//	tinhHieu(number1, number2);
	
} 
