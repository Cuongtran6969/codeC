#include<stdio.h>
#include<string.h>
void nhapChuoi(char s[100], int n) {
	printf("Nhap chuoi: ");
//	gets(s);
//	scanf("%s", s);
fgets(s, sizeof(s), stdin);
}
void xuatChuoi(char s[100], int n) {
	int i;
//	printf("%s", s);
puts(s);
	printf("\nlength = %d", strlen(s));
}
int main() {
	char s[100];
	int n=56;
	nhapChuoi(s, n);
	xuatChuoi(s, n);
}
