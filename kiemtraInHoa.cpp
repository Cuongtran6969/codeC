#include<stdio.h>
#include<string.h>
int main() {
	char s[50];
	printf("\nNhap chuoi:");
	gets(s);
	int i;
	int timThay=0;
	for(i=0;i<strlen(s) ;i++) {
		if((int)s[i]>=65 && (int)s[i]<=90) {
         printf("%d", i);
	  }
    }
//	if(!temp) {
//	for(i=n;i>temp;i--) {
//		s[i]=s[i-1];
//	}
//	s[temp] = ' ';
//   }
//	printf("\nSau khi them dau cach vao giua 2 chu so in Hoa: \"%s\"",s);
   } 
