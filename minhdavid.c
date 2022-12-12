#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[30];
	char gender[6];
	float python; 
	float c;
}student;

void intputN(int* n){
	do{
		printf("\nInput number of student: ");
		scanf("%d", n); 
	}while(!(0< *n && *n<1000)); 
} 

void inputstudents(student* st,int n){
	int i;
	char name[30];
	char gender[6];
	float python; 
	float c;
	printf("\nInput information for students: ");
	for(i=0;i<n;i++){
		fflush(stdin); 
		printf("\nStudent %d: ", i+1);
		do{
			printf("\nName: ");
			gets(name); 
		}while(!(0< strlen(name) && strlen(name) <30));
		strcpy(st[i].name, name);
		do{
			printf("\nGender: ");
			gets(gender);
		}while(!(strcmp(gender, "Nam") == 0|| strcmp(gender, "Nu") == 0));
		strcpy(st[i].gender, gender); 
		do{
			printf("\nPython: ");
			scanf("%f", &python);
		}while(!(0<= python && python<=10));
		st[i].python = python; 
		do{
			printf("\nC: ");
			scanf("%f", &c); 
		}while(!(0<=c && c<=10));
		st[i].c = c; 
		 
	} 
}

float avgmark(student stu){
	return (stu.c * 2 + stu.python)/3; 
} 
void showstudents(student* st, int n){
	int i;
	printf("\nStudent list: ");
	printf("\n|---------------------------------------------------|"); 
	printf("\n|  Name     | Gender      |  Python     | C         |   Average mark   |"); 
	printf("\n|---------------------------------------------------|");
	for(i=0;i<n;i++){
	printf("\n|  %-10s  |  %-6s  |   %-6g  |  %-6g    |",st[i].name, st[i].gender, st[i].python, st[i].c);
	printf("\n|---------------------------------------------------|");
	} 
} 
int main(){
	int n;
	intputN(&n); 
	student* st;
	st = (student*)malloc(n * sizeof(student));
	inputstudents(st, n); 
	showstudents(st, n); 
	
	return 0; 
}
