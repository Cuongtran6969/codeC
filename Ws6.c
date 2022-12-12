#include"stdio.h"
#include"stdlib.h"
#include"string.h"
typedef struct{
	char maSinhVien[100];
	float diemTrungBinh;
	int tuoi;
	char lop[50];
}sinhVien;
void inputInfo(sinhVien sv[], int *n) {
	int i, j, flat=0;
	char strHead[50] = "V1Study";
	char strClass[50];
//	sv = (sinhVien*)malloc(*n * sizeof(sinhVien));
	for(i=0; i<*n; i++) {
		do{
			printf("\nMa sinh vien: ");
		    scanf("%s", &sv[i].maSinhVien);
		}while(strlen(sv[i].maSinhVien)!=8);
		do{
		  printf("Diem trung binh: ");
		  scanf("%f", &sv[i].diemTrungBinh);
		}while(sv[i].diemTrungBinh<0 || sv[i].diemTrungBinh>10);

		do{
		  printf("Tuoi: ");
		  scanf("%d", &sv[i].tuoi);
		}while(sv[i].tuoi<18);

	    fflush(stdin);
		do{
		   printf("Lop: ");
		   gets(sv[i].lop);
		   flat = 0;
		   strcpy(strClass, sv[i].lop);
		   for(j=0; j<7; j++) {
		  	if(strClass[j] != strHead[j]) {
		  		flat = 1;
			  }
		  }
		}while(flat==1);
	}
}
int xetHocBong(float diemTb) {
		if(diemTb>=9) {
			return 5000000;
		}else if(diemTb>=8 && diemTb<9) {
			return 3000000;
		}else if(diemTb>=7 && diemTb<8) {
			return 1500000;
		}else{
			return 0;
		}
}
void importInfo(sinhVien sv) {
		printf("\n%s             %g                  %d            %s         %d", 
		sv.maSinhVien, sv.diemTrungBinh, sv.tuoi,sv.lop, xetHocBong(sv.diemTrungBinh));
}
void printInfo(sinhVien sv[], int n) {
	int i;
	    printf("\nMa sinh vien |   Diem trung binh   |   Tuoi    |       Lop      |    Hoc bong    |");
	for(i=0; i<n; i++) {
		importInfo(sv[i]);
	}
}
void swap(sinhVien *a, sinhVien *b) {
    sinhVien temp;
	 temp = *a;
    *a = *b;
    *b = temp;
}

int partition (sinhVien sv[], int low, int high) {
    int pivot = sv[high].diemTrungBinh;
    int left = low; 
    int right = high - 1; 
    while(1){
        while(left <= right && sv[left].diemTrungBinh < pivot) {
        	 left++;
		}
        while(right >= left && sv[right].diemTrungBinh > pivot) {
            right--; 	
		}
        if (left >= right){
        	 break;
		}; 
        swap(&sv[left], &sv[right]); 
        left++;
        right--;
    }
    swap(&sv[left], &sv[high]);
    return left;
}
  
void quickSort(sinhVien sv[], int low, int high) {
    if (low < high){
        int index = partition(sv, low, high);
        quickSort(sv, low, index - 1);
        quickSort(sv, index + 1, high);
    }
}
void sapXepBubbleSort(sinhVien sv[], int n) {
	int i, j;
	sinhVien temp;
	for(i=0; i<n-1; i++) {
		for(j=1; j<n; j++) {
			if(sv[i].maSinhVien<sv[j].maSinhVien) {
				temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
}

void highestAverage(sinhVien sv[], int n) {
	int i;
	float highest = sv[0].diemTrungBinh;
	for(i=0; i<n; i++) {
		if(sv[i].diemTrungBinh>highest) {
			highest = sv[i].diemTrungBinh;
		}
	}
	printf("\nSinh vien co diem trung binh cao nhat: \n");
	for(i=0; i<n; i++) {
		if(sv[i].diemTrungBinh==highest) {
	     importInfo(sv[i]);
		}
	}
}
void scoreLessThanFive(sinhVien sv[], int n) {
	int i;
	printf("\nSinh vien co diem trung binh < 5: \n");
	for(i=0; i<n; i++) {
		if(sv[i].diemTrungBinh<5) {
		  importInfo(sv[i]);
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
    printInfo(svStore, n);
	fclose(f);
}
int main() {
	int i;
	sinhVien *sv;
	int n;
	do{
		printf("Nhap so luong sinh vien: ");
	    scanf("%d", &n);
	    fflush(stdin);
	}while(n<=0 || n>5000);
	sv = (sinhVien*)malloc(n * sizeof(sinhVien));
	inputInfo(sv, &n);
	printInfo(sv, n);
	quickSort(sv, 0, n-1);
	printf("\nsau khi sap xep tang dan quicksort theo diem trung binh:\n");
	printInfo(sv, n);
	sapXepBubbleSort(sv, n);
	printf("\nsau khi sap xep giam dan bubblesort theo ma sinh vien:\n");
	printInfo(sv, n);
	highestAverage(sv, n);
	scoreLessThanFive(sv, n);
	ghiFile(sv, n);
	docFile(n);
}
