#include<stdio.h>
int kiemTraSoNgay( int month, int year) {
		switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		     return 30;
		break;
		case 2:
			if(year%4==0 && year%100!=0) {
				return 29;
			}else{
				return 28;
			}
	}
}
int kiemTraSoNgayTrongNam(int day, int month, int year) {
	for(int i=1;i<month;i++) {
		day+=(kiemTraSoNgay(i, year));
	}
	return day;
}
void timNgayTruoc(int day, int month, int year) {
	if(day==1) {
	if(month==1) {
		month=12;
		year--;
		day=31;
	}else{
		month--;
		day=kiemTraSoNgay(month,year);
	}
  }else{
  	day--;
  }
	printf("\nNgay truoc do la: %d/%d/%d", day, month, year);
}
void timNgaySau(int day, int month, int year) {
	if(day==kiemTraSoNgay(month, year)) {
		if(month==12) {
			day=1;
			month=1;
			year++;
		}else{
			day=1;
			month++;
		}
	}else{
		day++;
	}
	printf("\nNgay sau do la: %d/%d/%d", day, month, year);
 } 
int main() {
	int day, month, year;
	do{
	printf("nhap vao ngay thang nam: ");
	scanf("%d%d%d", &day,&month,&year);
}while(day>kiemTraSoNgay(month, year) || day<1 || day>31 || month<1 || month>12);
    
    printf("\nthang %d co %d ngay", month, kiemTraSoNgay(month,year));
    printf("\nngay %d thang %d nam %d la ngay thu %d trong nam",day, month, year,kiemTraSoNgayTrongNam(day,month,year));
//    printf("\nngay truoc do la: %d/%d", timNgayTruoc(day,month,year));
    timNgayTruoc(day,month,year);
    timNgaySau(day,month,year);
} 
