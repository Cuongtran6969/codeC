#include<stdio.h>
#include<string.h>
int main() {
	char s[50];
	int i;
    printf("Nhap vao chuoi ky tu: ");
    scanf("%s", &s);
    int doiXung = 1;
    int n = strlen(s);
	for(i = 0; i < n/2; i++){
		if(s[i] != s[n - i - 1]) {
			doiXung = 0;
		    break;
		}
	}
	if(!doiXung) {
		printf("Khong doi xung");
	}else{
		printf(" doi xung");
	}

}
