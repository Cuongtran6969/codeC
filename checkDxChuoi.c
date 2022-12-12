#include<stdio.h>
#include <string.h>
 
int main() {    
  char s[20], str2[20];    
  printf("Nhap chuoi 1: ");
  gets(s); 
  strcpy(str2,strrev(s));
  if (strcmp(strrev(s), str2) == 0) {
   printf("chuoi %s doi xung", s);
  } else{
   printf("Chuoi kdx");
  } 
  return 0;
}
