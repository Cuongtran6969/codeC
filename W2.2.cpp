#include<stdio.h>
#include<string.h>
void nhapMang(char s[][30], int n) {
	int i;
	fflush(stdin);
	for(i=0; i<n; i++){
		printf("\nString %d ", i+1);
		gets(s[i]);
	}
 }
void xuatMang(char s[][30], int n) {
	int i;
	for(i=0; i<n;i++) {
		printf("%s ", s[i]);
	}
}
void chuoiMax(char s[][30], int n) {
	int i;
	char max[30];
	strcpy(max, s[0]);
	for(i=0; i<n; i++) {
		if(strcmp(max, s[i])<0) {
			strcpy(max, s[i]);
		}
	}
	printf("\nChuoi lon nhat: %s", max);
}
void chuoiMin(char s[][30], int n) {
	int i;
	char min[30];
	strcpy(min, s[0]);
	for(i=0; i<n; i++) {
		if(strcmp(min, s[i])>0) {
			strcpy(min, s[i]);
		}
	}
	printf("\nChuoi nho nhat: %s", min);
}
float kichThuocChuoi(char s[][30],int i, int n) {
	int size = strlen(s[i]);
	int j, curentValue;
	float total = 0;
	for(j=0; j<size; j++) {
		  curentValue = s[i][j]; 
          total += curentValue;
		}
		return total;
	}
void averageOfArray(char s[][30], int n) {
	int i, curentValue;
	int size;
	float average;
	for(i = 0; i<n; i++) {
	 size = strlen(s[i]);
	 printf("\nKich thuoc trung binh cua chuoi %s la: ", s[i]);
     average = kichThuocChuoi(s, i, n)/size;
	 printf("%g",average);
	}
}

void biggerSizeThanAverage(char s[][30], int n) {
	int total;
	int size;
	float average;
	int i;
	int count=0;
	printf("\nChuoi co kich thuoc lon hon Average: ");
	for(i=0; i<n; i++) {
		size=strlen(s[i]);
		average = kichThuocChuoi(s, i, n)/size;
		total = (int)(kichThuocChuoi(s, i, n));
		if(total > average) {
			printf("\n%s", s[i]);
			count++;
		}
	}
	if(count==0) {
		printf("Khong co chuoi nao co kich thuoc lon hon Average:");
	}
}
void sapXepTangDan(char s[][30], int n) {
	printf("\nSap xep cac chuoi tang dan: ");
	int i, j;
	char temp[30];
	for(i=0; i<n-1; i++) {
	int viTriMin = i;
	for(j=i+1; j<n; j++) {
	 if(kichThuocChuoi(s, j, n) < kichThuocChuoi(s, viTriMin, n))
			 viTriMin = j;   
	}
	strcpy(temp,s[viTriMin]);
	strcpy(s[viTriMin],s[i]);
	strcpy(s[i],temp);
  }
    xuatMang(s,n);
}
int main() {
	char a[100][30];
	int m, n;
	do{
		printf("Nhap do dai so luong chuoi: n = ");
	    scanf("%d", &n);	
	}while(n<0 && n>50);
	nhapMang(a, n);
	xuatMang(a, n);
	chuoiMax(a, n);
	chuoiMin(a, n);
	averageOfArray(a, n);
	biggerSizeThanAverage(a, n);
	sapXepTangDan(a, n);
}
