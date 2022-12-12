#include<stdio.h>
#include<string.h>
void nhapChuoi(char str[][20]) {
	int i;
	printf("\nInput strings: ");
	for(i=0; i<5; i++){
		printf("\nString %d ", i+1);
		gets(str[i]);
	}
}
void showChuoi(char str[][20]) {
	int i;
	printf("\nshow strings: \n");
	for(i=0; i<5; i++){
		puts(str[i]);
	}
}
void orderByAscii(char str[][20]) {
	int i, j;
	char temp[40];
	for(i=0; i<4; i++) {
		for(j=i+1; j<5; j++) {
			if(strcmp(str[i],str[j])>0) {
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	showChuoi(str);
}
int main() {
	//Mang chuoi: la mot mang ky tu 2 chieu
	//khai bao 1 mang gom 5 chuoi
	char str[5][20];
	//moi chuoi co toi da 20 ky tu  (bao gom ca '\0')
	//*Nhap lieu
	nhapChuoi(str);
	showChuoi(str);
	orderByAscii(str);
}
