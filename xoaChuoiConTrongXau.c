#include"stdio.h"
#include"string.h"

char* pop_child_str(char* str1,char* str2){
  const int len = strlen(str2);
  char str3[128] = "";
  char *p1 = str1, *p2;
    
    /* T?o v�ng l?p d? x�a h?t chu?i con */
  while((p2 = strstr(p1,str2)) != NULL) { /*T�m v? tr� chu?i con b?ng h�m strstr*/
    strncat(str3,p1,p2 - p1);   /* N?i c�c ph?n kh�ng ch?a chu?i con */ 
    p1 = p2 + len;      /* D?ch chuy?n con tr? sang v? tr� t�m ki?m ti?p theo */
  }
  strcat(str3,p1);
  printf("%s\n",str3);    
    
}

int main()
{
  char str1[128], str2[128];
  printf("Nhap chuoi me: ");
  scanf("%s",str1);
  printf("Nhap chuoi con can xoa: ");
  scanf("%s",str2);
  
  pop_child_str(str1,str2);

  return(0);
}




//
//
//#include<stdio.h>
//
//char* pop_str(char* a, char chr, char* b){
//  int a_cnt;
//  int b_cnt = 0;
//  /* So s�nh t?ng k� t? trong chu?i a v?i k� t? c*/
//  for ( a_cnt = 0; a[a_cnt] != '\0'; ++a_cnt ) {
//    /* N?u k� t? kh�c c th� l?y ra v� th�m v�o k?t qu? */
//    if ( a[a_cnt] != chr ) {
//      b[b_cnt] = a[a_cnt];
//      ++b_cnt;
//    }
//  }
//  b[b_cnt] = '\0'; /* G�n k� t? k?t th�c chu?i '\0' */
//  return b;
//}
//
//int main(void){
//  char a[50] = "abcdcde"; /* Chu?i ban d?u*/
//  puts(a);
//  
//  char b[50]; /* Chu?i k?t qu?*/
//  char chr = 'c'; /* K� t? c?n x�a*/
// 
//  puts(pop_str(a,chr,b));
//
//  return 0;
//}
