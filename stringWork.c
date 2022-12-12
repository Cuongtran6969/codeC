#include"stdio.h"
#include"string.h"
void uppscase(char str[]) {
	int i;
	for(i=0; i<strlen(str); i++) {
	 if(str[i]==32 && str[i+1]>=97 && str[i+1]<=122) {
		str[i+1]-=32;
	  }else if(str[i]>=65 && str[i]<=90 && str[i-1]!=32){
	  	str[i]+=32;
	  }
	}
	str[0]-=32;	
	puts(str);
}
void lowercase(char str[]) {
	int i;
    for(i=0; i<strlen(str); i++) {
    	if(str[i]>=65 && str[i]<=90) {
		str[i]+=32;
	 }
	}
	puts(str);
}
void xuatNguoc(char str[]) {
int a=strlen(str)-1;
int i, j;
   for(i=strlen(str)-1;i>=0;i--)
   {
      if(str[i]==32 || i==0)
      {
         if(i==0)
         {
            printf(" ");
         }
         for(j=i;j<=a;j++)
         {
            printf("%c",str[j]);
         }
         a=i-1;
      }
   }
}
int main() {
	int i, j;
	char str[100];
	printf("Nhap vao chuoi: ");
	gets(str);
	printf("\nIn hoa ky tu: ");
	uppscase(str);
	printf("\nIn thuong: ");
    lowercase(str);
    printf("\nXuat nguoc mang: ");
    xuatNguoc(str);
} 
