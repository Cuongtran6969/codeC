#include"stdio.h"
#include"stdlib.h"
#include"string.h"
typedef struct{
	char hoTen[100];
	char gioiTinh[10];
	float diemPython;
	float diemC;
}sinhVien;
void inputList(sinhVien sv[], int *n) {
	int i;
	for(i=0; i<*n; i++) {
		fflush(stdin);
		printf("\nHo va ten: ");
		gets(sv[i].hoTen);
		fflush(stdin);
		printf("\nGioi tinh: ");
		gets(sv[i].gioiTinh);
		printf("\nDiem Python: ");
		scanf("%f", &sv[i].diemPython);
		printf("\nDiem C: ");
		scanf("%f", &sv[i].diemC);
	}
}

int checkPass(sinhVien sv) {
	int result;
	float diemC = sv.diemC;
	float diemPython = sv.diemPython;
	char gender[50];
	strcpy(gender,sv.gioiTinh);
	float diemTb = ((diemC*2)+diemPython)/3;
	if(diemTb>=5) {
		result = 1;
	}else if(diemTb<5 && strcmp(gender,"Nam")==0 || strcmp(gender,"nam")==0) {
		result = 0;
	}else if(diemTb<5 && strcmp(gender,"Nu")==0 ||  strcmp(gender,"nu")==0) {
		result = 1;
	}
	return result;
}
void printList(sinhVien sv[], int n) {
	int i;
	printf("Ho va ten     |   gioi tinh   |   diem Python    |    diem C   |    ket qua  |");
	for(i=0; i<n; i++) {
		printf("\n%s              %s                 %g             %g            %s",
		 sv[i].hoTen, sv[i].gioiTinh, sv[i].diemPython, sv[i].diemC, checkPass(sv[i])==1?"dau":"truot");
	}
}
void printItem(sinhVien sv) {
	printf("\n%s              %s                 %g             %g            %s",
		 sv.hoTen, sv.gioiTinh, sv.diemPython, sv.diemC, checkPass(sv)==1?"dau":"truot");
}
float diemTb(sinhVien sv) {
	float diemC = sv.diemC;
	float diemPython = sv.diemPython;
	float diemTb = ((diemC*2)+diemPython)/3;
	return diemTb;
}
void sapXepGiamDan(sinhVien sv[], int n) {
	int i, j;
	sinhVien temp;
	for(i=0; i<n-1; i++) {
		for(j=1; j<n; j++) {
			if(diemTb(sv[j])>diemTb(sv[i])) {
				temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
	printf("\nsau khi sap xep giam dan theo diemTb:\n");
	printList(sv, n);
}
void timKiemSinhVien(sinhVien sv[], int n) {
	int i, count=0;
	char findName[50];
	fflush(stdin);
	printf("\nNhap vao ho ten can tiem kiem: ");
	gets(findName);
	for(i=0; i<n; i++) {
		if(strcmp(sv[i].hoTen, findName)==0) {
			printItem(sv[i]);
			count++;
		}
	}
	if(count==0) {
		printf("\nkhong tim thay sinh vien: %s", findName);
	}
}
void listPass(sinhVien sv[], int n) {
	int i;
	printf("\nDanh sach sinh vien PASS:\n");
	for(i=0; i< n; i++) {
		if(checkPass(sv[i])==1) {
			printItem(sv[i]);
		}
	}
}
void listNotPass(sinhVien sv[], int n) {
	int i;
	printf("\nDanh sach sinh vien NOT PASS:\n");
	for(i=0; i< n; i++) {
		if(checkPass(sv[i])==0) {
			printItem(sv[i]);
		}
	}
}
void listAverageGreaterThanEight(sinhVien sv[], int n) {
	int i;
	printf("\nDanh sach sinh vien Nco diem trung binh >=8:\n");
	for(i=0; i< n; i++) {
		if(diemTb(sv[i])>=8) {
			printItem(sv[i]);
		}
	}
}
void ghiFile(sinhVien* sv, int n) {
	int i;
	char nameFile[100];
	fflush(stdin);
	printf("\nNhap ten file can xuat ra: ");
	gets(nameFile);
	FILE *f;
	f = fopen(nameFile, "w");
	if(f==NULL) {
		printf("Khong tao duoc file! ");
		return;
	}
	fwrite(sv, sizeof(sinhVien) * n, 1, f);
	printf("\nDa luu thanh cong!");
	fclose(f);
}
void docFile(int n) {
	int i;
	char nameFile[100];
	fflush(stdin);
	printf("\nNhap ten file can mo: ");
	gets(nameFile);
	FILE *f;
	f = fopen(nameFile, "r");
	if(f==NULL) {
		printf("\nKhong mo duoc file! ");
		return;
	}
	sinhVien* svStore;
	svStore = (sinhVien*)malloc(n * sizeof(sinhVien));
	 
	fread(svStore, n * sizeof(sinhVien), 1, f);
    printList(svStore, n);
	fclose(f);
}
int main() {
	sinhVien *sv;
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	fflush(stdin);
	sv = (sinhVien*)malloc(n * sizeof(sinhVien));
	inputList(sv, &n);
	printList(sv, n);
	sapXepGiamDan(sv, n);
	timKiemSinhVien(sv, n);
	listPass(sv, n);
	listNotPass(sv, n);
	listAverageGreaterThanEight(sv, n);
	ghiFile(sv, n);
	docFile(n);
}
