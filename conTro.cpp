#include<stdio.h>
void swap(int &a; int &b) {
	int temp = a;
	a=b;
	b=temp;
}
int main() {
	//con tro (pointer):
	//1. luu tru dia chi cua bien
	//dung chung vung nho
	//2. dung nhu la mang
	//3. cap phat vung nho
	//*luu tru dia chi bien khac:
	//khai bao con tro
	//kieu_du_lieu* ten_con_tro;
	//kieu_du_lieu *ten_con_tro;
	//*co the lay ra gia tri cua bien dc khai bao cuc bo
	
	int* p;
	int a = 10;
	//p chua dia chi a
	p = &a;
	//*p va a cung chua mot gia tri => Chung vung nho
	printf("%d", *p);
	a=20;
	printf("\n%d", *p);
	*p=30;
	printf("\n%d", a);
	int c = 5;
	int d = 10;
	printf("Gia tri trc khi hoan vi c =%d, d = %d", c,d);
	swap(&c, &d);
	printf("Gia tri sau khi hoan vi c =%d, d = %d", c,d);
}
