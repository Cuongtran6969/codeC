#include<stdio.h>
int main() {
    char code;
	for(code=0; code<=255; code++) {
		printf("%c : %d, %o, %X\n", code, code, code, code);
		if(code !=0 && code %20==0)
		 getchar();
	}
} 
