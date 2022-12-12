#include<stdio.h>
#include<string.h>
typedef struct {
	int id;
	char name[30];
	int age;
	float salary;
	float hours;
}Employee;

void nhapThongTin(Employee* sv) {
	printf("input infor of user1: \n");
	printf("id: ");
	scanf("%d", &sv->id);
	fflush(stdin); 
	printf("name: ");
	scanf("%s", &sv->name);
	printf("age: ");
	scanf("%d", &sv->age);
	printf("salary: ");
	scanf("%f", &sv->salary);
	printf("hour: ");
	scanf("%f", &sv->hours);
}

float paySalary(Employee sv) {
	float bonus = 0;
	if(sv.hours>200) {
		bonus = sv.salary*0.2;
		sv.salary+=bonus;
	}else if(sv.hours>=100 && sv.hours<200) {
		bonus = sv.salary*0.1;
		sv.salary+=bonus;
	}else{
		sv.salary+=bonus;
	}
	return sv.salary;
}
void hienThi(Employee sv) {
	printf("\nId: %d", sv.id);
	printf("\nName: %s", sv.name);
	printf("\nAge: %d", sv.age);
	printf("\nSalary: %g", sv.salary);
	printf("\nHour: %g", sv.hours);
	printf("\nSalary after bonus = %g", paySalary(sv));
}
int main() {
	Employee sv;
	nhapThongTin(&sv);
	hienThi(sv);
}
