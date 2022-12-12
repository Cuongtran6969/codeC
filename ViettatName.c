#include"stdio.h"
#include"string.h"
int main() {
	char str[200];
	gets(str);
	int i, j, count=0;
	for(i=0; i<strlen(str); i++) {
		if(str[i]==32) {
			count++;
		}
	}
	int dem=0;
	printf("\ncount = %d\n", count);
	for(i=0; i<strlen(str); i++) {
		if(i==0) {
			printf("%c", str[0]);
		}
		if(str[i]==32) {
			dem++;
		}
		if(str[i]==32 && dem<count) {
			printf("%c", str[i+1]);
		}
		if(dem==count) {
			printf("%c", str[i+1]);
		}
	}
}
