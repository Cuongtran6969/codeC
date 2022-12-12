#include<stdio.h>
int main() {
	char  ch[100];
	int nVowels=0, nConsonants=0, nOthers=0;
	do{
	printf("Nhap vao ky tu bat ky: ");
	scanf("%c",&ch);
	  ch[100] = getchar();
	  ch= toupper(ch[100]);
	   if(ch>='A' && ch<='Z') {
		switch(ch) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				nVowels++;
				break;
			default:
				nConsonants++;
		  }
     	}else{
	    	nOthers++;
	    }
    }while(ch!='\n');
    printf("\nNumber of vowels: %d",nVowels);
    printf("\nNumber of consonants: %d",nConsonants);
    printf("\nNumber of others: %d",nOthers);
}
