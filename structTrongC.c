#include<stdio.h>
typedef struct{
	int id;
	char name[20];
	char gender[10];
	float age;
}Animal;
void inputData(Animal *cat) {
    printf("\nEnter id: ");
    scanf("%d", &cat->id);
    printf("\nEnter name: ");
    scanf("%s", cat->name);
    printf("\nEnter gender: ");
    scanf("%s", &cat->gender);
    printf("\nEnter age: ");
    scanf("%f", &cat->age);
}
//void showData(Animal cat) {
//	printf("ID: %d", cat.id);
//	printf("\nNAME: %s", cat.name);
//	printf("\nGENDER: %s", cat.gender);
//	printf("\nAGE: %g", cat.age);
//}
void inputDataArray(Animal dogs[], int size) {
	int i;
	printf("\nInput data for dog: ");
	for(i=0; i<3; i++) {
		printf("\nType of dog time %d:", i+1);
		showData(dogs[i]);
	}
}
//void inputSize(int *size) {
//	do{
//		printf("Input size: ");
//		
//	}
//}
void showData(Animal dogs[], int size) {
	int i;
	printf("\bList of dogs: ");
		for(i=0; i<3; i++) {
		printf("\nType of dog time %d:", i+1);
		inputData(&dogs[i]);
	}
}
int main() {
	//cau tryc (Struct): cach thuc mieu ta,
	//luu tru cac dac diem, thong tin cua doi tuong
	//int, char , float, double
	//*khai bao: Co the khai bao trong ham hoac ngoai ham
	Animal cat;
	//* truy xuat cac thuoc tinh cua doi tuong
	//de truy xuat ta dung toan tu .
//	cat.id = 1234;
//	cat.name = 'Wang';
//	cat.gender = 'female';
//	cat.age = 18;
//	inputData(&cat);
//	showData(cat);

    dog = (Animal*)malloc(size * sizeof(Animal));
    Animal *dog;
    int size;
    inputSize(&size)
	inputDataArray(&dog);
	showData(dog, size);
}
