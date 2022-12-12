#include"stdio.h"
#include"string.h"
int main() {
	char str[100];
	printf("Nhap vao chuoi ky tu: ");
	gets(str);
	int i, j;
	char temp;
	for(i=0; i<strlen(str)-1; i++) {
		for(j=i+1; j<strlen(str); j++) {
			if(str[i]>str[j]) {
				temp = str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep: ");
	puts(str);
}
