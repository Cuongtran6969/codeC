#include"stdio.h"
#include"string.h"
int main() {
	int i, j, dem=0;
	char str[100];
	gets(str);
	char str2[100];
	gets(str2);
	for(i=0; i<strlen(str); i++) {
	  while(str[i]==str2[j]) {
	  	j++;
	  	i++;
	  	dem++;
	  	
	  }
	  if(dem==strlen(str2)) {
	  	printf("hoan doi");
	  }
	}
}
