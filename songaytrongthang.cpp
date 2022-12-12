#include<stdio.h>
int main() {
	int thang;
	int nam;
	printf("nhap vao thang: ");
	scanf("%d", &thang);
	printf("nhap vao so nam: ");
	scanf("%d", &nam);
	switch(thang){
	case 1: printf("co 31 ngay");
		break;
	case 2: 
	   if(nam%4==0 && nam%100!=0){
	   	printf("co 29 ngay");
	   }else{
	   	printf("co 28 ngay");
	   }
		break;
	case 3: printf("co 31 ngay");
		break;
	case 4: printf("co 30 ngay");
		break;
	case 5: printf("co 31 ngay");
		break;
	case 6: printf("co 30 ngay");
		break;
	case 7: printf("co 31 ngay");
		break;
	case 8: printf("co 31 ngay");
		break;
	case 9: printf("co 30 ngay");
		break;
	case 10: printf("co 31 ngay");
		break;
	case 11: printf("co 30 ngay");
		break;
	case 12: printf("co 31 ngay");
		break;
	}
}
