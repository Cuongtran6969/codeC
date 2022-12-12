#include<stdio.h>
int main() {
	char ch;
	printf("Nhap vao ky tu bat ky: ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122) {
		switch(ch) {
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				printf("%c la nguyen am", ch);
				break;
			default:
				printf("%c la phu am", ch);
		}
	}else if(ch>=0 && ch<= 9|| ch>=48 && ch<=57) {
		printf("%c la ky tu so", ch);
	}else{
		printf("%c ky tu khac", ch);
	}
}
