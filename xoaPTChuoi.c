#include"stdio.h"
#include"string.h"
//void *chen(char st[], int *len, char ch, int vitri)
//{
//    int i;
//    *len = strlen(st);
//    for(i = *len; i >vitri ; i--)
//    st[i] = st[i-1] ;
//    st[vitri] = ch;
//    *len++;
//}
int main() {
	char str[100], i, j;
	gets(str);
	for(i=strlen(str)-1; i>=0; i--) {
		if(str[i]<65 || str[i]>90 && str[i]<97 || str[i]>122) {
			for(j=i; j<strlen(str)-1; j++) {
				str[j] = str[j+1];
			}
			str[strlen(str)-1] = '\0';
		}
	}
	puts(str);
	
	//them
  char c;
  int add;
  int len = strlen(str);
  printf("Nhap vi tri can chen");
  scanf("%d", &add);
  //vi tri ko dc vuot qua
  fflush(stdin);
  printf("Nhap gia tri can chen");
  scanf("%c", &c);
  
  for(i=strlen(str); i>add; i--) {
  	str[i] = str[i-1];
  }
  str[add] = c;
  puts(str);
  
  
//  chen(str, &len, c, add);
//  puts(str);
}
