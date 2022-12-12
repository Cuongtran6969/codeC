#include<stdio.h>
#include<string.h>
#include<math.h>
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
			printf("%s ", s[i]);
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
	int viTriMin;
	char temp[30];
	for(i=0; i<n-1; i++) {
	 viTriMin = i;
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
void sapXepGiamDan(char s[][30], int n) {
	printf("\nSap xep cac chuoi giam dan: ");
	int i, j;
	int viTriMax;
	char temp[30];
	for(i=0; i<n-1; i++) {
	 viTriMax = i;
	for(j=i+1; j<n; j++) {
	 if(kichThuocChuoi(s, j, n) > kichThuocChuoi(s, viTriMax, n))
			viTriMax = j;
	}
    strcpy(temp,s[viTriMax]);
	strcpy(s[viTriMax],s[i]);
	strcpy(s[i],temp);
  }
    xuatMang(s,n);
}
void compareArray(char s[][30], int n) {
	int i;
	char arrayMax[30];
	char arrayMin[30];
//	max	
	strcpy(arrayMax,s[0]);
	for(i=1;i<n;i++) {
      if(strcmp(arrayMax,s[i])<0) {
       	strcpy(arrayMax, s[i]);
	  }
	}
	printf("\nchuoi Max %s", arrayMax);
//  min
	strcpy(arrayMin,s[0]);
	for(i=1;i<n;i++) {
      if(strcmp(arrayMin,s[i])>0) {
       	strcpy(arrayMax, s[i]);
	  }
	}
	printf("\nchuoi Min %s", arrayMin);
}
void tangDanTheoAscii(char s[][30], int n) {
	printf("\nMang tang dan theo thu tu bang ma ASCII: ");
	int i, j;
	int viTriMin;
	char temp[30];
	for(i=0; i<n-1; i++) {
	 viTriMin = i;
	for(j=i+1; j<n; j++) {
	 if(strcmp(s[viTriMin],s[j])>0)
			viTriMin = j;
	}
    strcpy(temp,s[viTriMin]);
	strcpy(s[viTriMin],s[i]);
	strcpy(s[i],temp);
  }
    xuatMang(s,n);	
}
void giamDanTheoAscii(char s[][30], int n) {
	printf("\nMang tang dan theo thu tu bang ma ASCII: ");
	int i, j;
	int viTriMax;
	char temp[30];
	for(i=0; i<n-1; i++) {
	 viTriMax = i;
	for(j=i+1; j<n; j++) {
	 if(strcmp(s[viTriMax],s[j])<0)
			viTriMax = j;
	}
    strcpy(temp,s[viTriMax]);
	strcpy(s[viTriMax],s[i]);
	strcpy(s[i],temp);
  }
    xuatMang(s,n);	
}
void checkSize(char s[][30],char stringFind[0][30], int n) {
	int i;
	int count=0;
	for(i=0; i<n; i++) {
		if(kichThuocChuoi(s,i,n)==kichThuocChuoi(stringFind,0,1)) {
		 printf("\nKich thuoc chuoi %s bang kich thuoc chuoi can tim", s[i]);
	     count=1;
		}
	}
	if(count==0) {
		printf("Khong co chuoi nao co kich thuoc bang chuoi can tim!");
	  }
}
void findString(char s[][30], int n) {
	char stringFind[0][30];
	do{
        fflush(stdin);
		printf("\nNhap mang ban can tim: ");
    	gets(stringFind[0]);
	 }while(strlen(stringFind[0])>30);
	    char temp[30];
    	strcpy(temp,stringFind[0]);
    checkSize(s, stringFind, n);
    int i;
	int flat=0;
    for(i=0; i<n; i++) {
    	if(strstr(s[i],temp)!=NULL) {
//    		printf("string %s",temp);
    	printf("\nTrong chuoi %s chua chuoi can tim",s[i]);
    	flat = 1;
      }
	}
	if(flat==0) {
		printf("\nKhong tim thay chuoi can tim trong mang!");
	}
}
//int checkDoiXung(char s[][30],int length) {
//   	 int flat=0;
//     char str2[30];
//     strrev(s);
//     strcpy(str2,s);
//     	if(strcmp(s,str2)==0) {
//     	  return flat=1;
//		}else{
//		  return flat;
//		}
//	strrev(s);
//}
//void checkDoiXung2(char s[][30], int n) {
//	int i, result, count=0;
//	int length;
//	for(i=0; i<n; i++) {
//		length = strlen(s[i]);
//		result = checkDoiXung(s[i], length);
//		if(result==1) {
//			printf("\nchuoi %s doi xung", s[i]);
//			count=1;
//		}
//	}
//	if(count==0) {
//		printf("\nKhong tim thay chuoi doi xung!");
//	}
//}
void checkKyTuSo(char s[][30], int n) {
	int i, j, length, flat=0;
	for(i=0; i<n; i++) {
		length=strlen(s[i]);
		for(j=0; j<length; j++) {
			if(s[i][j]>='0'&&s[i][j]<='9') {
				printf("\nchuoi %s co ky tu so %c", s[i]);
				flat++;
				break;
			}
		}
	}
	if(flat==0) {
		printf("\nKhong co ky tu so trong cac chuoi!");
	}
} 
void checkKyInHoa(char s[][30], int n) {
	int i, j, length, flat=0;
	for(i=0; i<n; i++) {
		length=strlen(s[i]);
		for(j=0; j<length; j++) {
			if(s[i][j]>='A'&&s[i][j]<='Z') {
				printf("\nchuoi %s co ky tu in Hoa", s[i]);
				flat++;
				break;
			}
		}
	}
	if(flat==0) {
		printf("\nKhong co ky in hoa trong cac chuoi!");
	}
} 
void findCharacter(char s[][30], int n) {
	int i, j, length, flat=0;
	char character;
	printf("\nNhap vao ky tu can tim: ");
	scanf("%c", &character);
	for(i=0; i<n; i++) {
		length=strlen(s[i]);
		for(j=0; j<length; j++) {
			if(strchr(s[i],character)!=NULL) {
				printf("\nchuoi %s co ky tu %c", s[i], character);
				flat++;
				break;
			}
		}
	}
	if(flat==0) {
		printf("\nKhong co ky %c trong cac chuoi!", character);
	}
}
void countNumber(char s[][30], int n) {
	int i, number, flat=0;
	for(i=0; i<n; i++) {
		number=strlen(s[i]);
			printf("\nchuoi %s co %d ky tu", s[i], number);
	}
}
//void addCharacterAddress5(char s[][30], int n) {
//	int i, j, length, flat=0;
//	char character;
//	length = strlen(s[n]);
//	printf("\nchuoi %s co length = %d",s[n], length);
//	if(length>5) {
//	printf("\nNhap vao ky tu can them vao vi tri thu 5 cua o cuoi cung: ");
//	scanf("%c", &character);
//	}else{
//		printf("\nChuoi nay khong co vi tri thu 5");
//	}
//	for(j=n; j>=5; j++) {
//		strcpy(s[n][j], s[n][j-1]);
//	}
//	    strcpy(s[n][5],character);
//}
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
	sapXepGiamDan(a, n);
	compareArray(a, n);
	tangDanTheoAscii(a, n);
	giamDanTheoAscii(a, n);
	findString(a, n);;
//	checkDoiXung2(a, n);
	checkKyTuSo(a, n);
	checkKyInHoa(a, n);
	findCharacter(a, n);
	countNumber(a, n);
//	addCharacterAddress5(a, n);
}
