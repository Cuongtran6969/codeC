#include"stdio.h"
#include"stdlib.h"
int main() {
FILE* fp;

fp = fopen("file.txt", "w");

 char ch1; 
while(1) {
	printf("\nEnter any character: '@' to finish");
	ch1 = getche();
	if(ch1=='@') {
		break;
	}
	fputc(ch1, fp);
}
	fclose(fp);
  if((fp = fopen("file.txt", "r"))==NULL) {
  	printf("\n can't open");
  }
  char ch;
  puts("");
  do{
  	ch = fgetc(fp);
    printf("%c", ch);
  }while(ch!=EOF);

fclose(fp);
}
