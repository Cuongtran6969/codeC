#include <stdio.h>
#include <string.h>
void practiceInPlace(char mangMe[100], char mangCon[100]) {
	int dem=0;
	int i, j;
	char flat;
	char *s;
	s = strstr(mangMe,mangCon);
	//printf("\nmang sau tim kiem: %s\n", s);
	j=0;
	for(i=0; i<strlen(mangMe); i++) {		
		if(mangMe[i]==s[j]){
	//		printf("vi tri mang me bang mang con %c\n", mangMe[i]);
			j++;
			dem++;
		}
	}	
	//printf("\ndem = %d\n", dem);
		if(dem==strlen(s)) {
		flat = strlen(mangMe) - strlen(s);
		strrev(mangCon);
	//	printf("\nMang con dao nguoc: \n");
	//	puts(mangCon);
		j=0;
		 for(i=flat; i<strlen(mangCon)+flat; i++) {
		 		mangMe[i]=mangCon[j];
		 		j++;			 
		 }
		 strrev(mangCon);	
	 }	 

}
int main() {
	int i;
	char mangMe[100];
	char mangCon[100];
	printf("Nhap vao mang me: ");
	gets(mangMe);
	printf("Nhap vao mang con: ");
	gets(mangCon);
	do{
	 practiceInPlace(mangMe, mangCon);
	}while(strstr(mangMe, mangCon)!=NULL);
	puts(mangMe);
}

