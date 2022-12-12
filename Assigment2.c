#include"stdio.h"
#include<string.h>
#include<stdlib.h>
typedef struct{
  char name[20];
  char country[20];
  int birthyear;
  int salary;
}employee; 
void nhapDanhSach(employee sv[], int *n) {
	printf("\nNhap thong tin nhan su:");
	int i;
	int age;
	for(i=0; i<*n; i++) {
		fflush(stdin);
		printf("\nName: ");
		gets(sv[i].name);
		fflush(stdin);
		printf("\nCountry: ");
		gets(sv[i].country);
		do{
			printf("\nNam sinh: ");
		    scanf("%d", &sv[i].birthyear);
		    age = 2022 - sv[i].birthyear;
		}while(age<18 || age>60);
		printf("\nLuong: ");
		scanf("%d", &sv[i].salary);
	}
}
void sapXepDanhSach(employee sv[], int n) {
	int i, j;
	employee temp;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(sv[j].salary > sv[i].salary) {
				temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
}
void xuatDanhSach(employee sv[], int n) {
	printf("Ten       |Que quan      |Nam sinh      | Luong    ");
	int i;
  for(i=0; i<n; i++) {
	printf("\n%s     |",sv[i].name);
	printf("%s       |",sv[i].country);
	printf("%d       |",sv[i].birthyear);
	printf("%d       ",sv[i].salary);
  }
}
void timKiemTheoCountry(employee sv[], int n) {
	int count;
	char listTogether[100] = {};
	int i, j;
	for(i=0; i<n; i++) {
 	 while(strstr(listTogether,sv[i].country)==NULL){
 	 	strcat(listTogether,sv[i].country);
        strcat(listTogether,",");
        count=0;
         for(j=0; j<n; j++) {
	   	  if(strcmp(sv[j].country, sv[i].country)==0) {
	   	 	count++;
			}
	     }
	     printf("\n+%d nhan su que \'%s\'", count, sv[i].country);
	  }	   	
	}
} 
void timKiemSinhVien(employee sv[], int n) {
	char findCountry[20];
	int lowestSalary;
	fflush(stdin);
	printf("\nNhap que quan: ");
	gets(findCountry);
	printf("\nNhap luong thap nhat (min): ");
	scanf("%d", &lowestSalary);
	int i, count=0;
	for(i=0; i<n; i++) {
		if(strcmp(sv[i].country, findCountry)==0 && sv[i].salary>lowestSalary) {
		printf("\n%s     |%s       |%d       |%d       |",sv[i].name,sv[i].country,sv[i].birthyear,sv[i].salary);
		count++;
		}
	}
	if(count==0) {
		printf("\nKhong co nguoi thao man dieu kien nay!");
	}
}
void xuatVaoFile(employee* sv, int n) {
	int i;
	char nameFile[100];
	fflush(stdin);
	printf("Nhap ten file can xuat ra: ");
	gets(nameFile);
	FILE *f;
	f = fopen(nameFile, "wb");
	if(f==NULL) {
		printf("Khong tao duoc file! ");
		return;
	}
	fwrite(sv, sizeof(employee) * n, 1, f);
	printf("\nDa luu thanh cong!");
	fclose(f);
}
void MoFileVaHienThi(int n) {
	int i;
	char nameFile[100];
	fflush(stdin);
	printf("Nhap ten file can mo: ");
	gets(nameFile);
	FILE *f;
	f = fopen(nameFile, "rb");
	if(f==NULL) {
		printf("\nKhong mo duoc file! ");
		return;
	}
	employee* svStore;
	svStore = (employee*)malloc(n * sizeof(employee));
	 
	fread(svStore, n * sizeof(employee), 1, f);
    xuatDanhSach(svStore, n);
	fclose(f);
}
void options() {
	printf("\n1. Nhap lieu");
	printf("\n2. Sap xep theo luong giam dan");
	printf("\n3. Phan tich");
	printf("\n4. Tim nhan su theo que quan va luong thap nhat");
	printf("\n5. Luu file");
	printf("\n6. Mo file va hien thi");
	printf("\n7. Thoat");
}

void choiceContinue() {
	char choice;
	int i, j;
	printf("\nBan co muon tiep tuc khong");
	printf("\nCo.(bam phim 'y', 'Y')");
	printf("\nKhong.(bam phim 'n', 'N')");
	printf("\nClear man hinh! (bam phim 'c', 'C')");
	fflush(stdin);
	scanf("%c", &choice);
	do{
		if(choice == 'y' || choice == 'Y') {
		     break;
	    }else if(choice == 'n' || choice == 'N') {
	    	exit(1);
		}else if(choice != 'c' || choice != 'C'){
			system("cls");
		}else{
			printf("Khong co lua chon nay, moi nhap lai!");
		}
	}while(choice != 'y' || choice != 'Y' || choice != 'n' || choice != 'N' || choice != 'c' || choice != 'C');
}
int main() {
	employee *sinhVien;
	int n;  
   	int option;
   	options();
    while(1) {
    	do{
	       printf("\nMoi cho option: ");
	       scanf("%d", &option);
	    }while(option<1 || option>7);
        switch(option) {
    	case 1: printf("Nhap vao so luong nhan su: ");
	            scanf("%d", &n);
	            sinhVien = (employee*)malloc(n*sizeof(employee)); 
		        nhapDanhSach(sinhVien, &n);
		        choiceContinue();
		        break;
    	case 2: printf("\nSau khi sap xep theo luong giam dan: \n");
		        sapXepDanhSach(sinhVien, n);
    	        xuatDanhSach(sinhVien, n);
    	        choiceContinue();
    	        break;
    	case 3: timKiemTheoCountry(sinhVien, n);
    	        choiceContinue();
    	         break;
    	case 4: timKiemSinhVien(sinhVien, n);
    	        choiceContinue();
    	         break;
    	case 5: 
                xuatVaoFile(sinhVien, n);
                choiceContinue();
                break;
        case 6: 
                MoFileVaHienThi(n);
                choiceContinue();
                break;
        case 7:
        	return 0;
        default:
        	printf("\nKhong co lua chon nay!");
	 }	
	}

}
