#include<stdio.h>
#include<string.h>
void nhapChuoi(char s[]) {
	fflush(stdin);
	do{
	printf("Nhap vao chuoi ky tu: ");
	gets(s);
      }
	while(strlen(s)<0 && strlen(s)>50);
}
void kiemTraKyTuSo(char s[]){
	int i;
	int timThay=0;
	for(i=0; i<strlen(s) ;i++) {
		if((int)s[i]>=48 && (int)s[i]<=57) {
			timThay = 1;
		}
	}
	if(timThay==1) {
		printf("\nCo ky tu so");
	}else{
		printf("\nKhong co ky tu so");
	}
}
void kiemTraInHoa(char s[]) {
	int i;
	int timThay=0;
	for(i=0;i<strlen(s) ;i++) {
		if((int)s[i]>=65 && (int)s[i]<=90) {
         timThay = 1;
	  }
    }
	if(timThay==1) {
		printf("\nCo ky tu in Hoa");
	}else{
		printf("\nKhong co ky tu in Hoa");
	}
}
void kiemTraKyTu(char s[]) {
	int i;
	char ch;
	int timThay=0;
	fflush(stdin);
	printf("\nInput character need find: ");
	ch=getchar();
	for(i=0;i<strlen(s);i++) {
		if(strchr(s,ch)!=NULL) {
			timThay = 1;
			printf("\nChuoi \"%s\" co chua ky tu '%c'",s,ch);
			break;
		}
	}
		if(timThay==0) {
		printf("\nChuoi \"%s\" khong chua ky tu'%c'",s,ch);
	}
}
void kiemTraChuavaDoDai(char s[]) {
	int i;
	char s2[20];
	int timThay=0;
	fflush(stdin);
	printf("\nNhap vao chuoi s2 can tim kiem: ");
	gets(s2);
	printf("\nlength s2 = %d", strlen(s2));
	for(i = 0; i<strlen(s); i++) {
	if(strstr(s,s2)!=NULL) {
		timThay = 1;
			printf("\nChuoi \"%s\" co chua chuoi \"%s\"",s,s2);
			break;
		}
  }
		if(timThay==0) {
		printf("\nChuoi \"%s\" khong chua chuoi \"%s\"",s,s2);
	}
		if(strlen(s)>strlen(s2)) {
      		printf("\nChuoi \"%s\" co do dai lon hon chuoi \"%s\"",s,s2);
	   }else{
	   	    printf("\nChuoi \"%s\" co do dai ngan hon chuoi \"%s\"",s,s2);
	   }
 }
void kiemTraTinhDoiXung(char s[]) {
	int i;
	int doiXung=0;
	char phanTuDoiXung;
	for(i = 0; i<strlen(s)/2;i++) {
		if(s[i]!=s[strlen(s)-1-i]) {
			printf("\nMang khong doi xung");
			doiXung=1;
			break;
		}
	}
	if(!doiXung) {
		printf("\nChuoi \"%s\" doi xung qua '%c'",s,(int)s[strlen(s)/2]);
	}
}
void kiemTraSoTu(char s[]) {
    int x=0;
    while (s[x] != '\0')
        x=x+1;
    printf("\nTong so ki tu trong chuoi:%d",x);
}
void catCuoiChuoi(char s[]) {
	int i;
	for(i=strlen(s)-1;i>0;i--) {
		if(s[i]!=' '){
			s[i+1] = '\0';
			break;
		}
	}
	printf("\nSau khi cat dau cach cuoi chuoi: \"%s\"",s);
}
void catDauChuoi(char s[]) {
	int i;
	
	strrev(s);
	for(i=strlen(s)-1;i>0;i--) {
		if(s[i]!=' '){
			s[i+1]='\0';
			break;
		}
	}
	    strrev(s);
		printf("\nSau khi cat dau cach dau chuoi: \"%s\"",s);
}
void dauCach(char s[]) {
	int i, j;
	for(i=0;i<strlen(s)-1;i++) {
		while(s[i]==' ' && s[i+1]==' ') {
			for(j=i+1;j<strlen(s)-1;j++) {
				s[j]=s[j+1];
			}
			s[strlen(s)-1] ='\0';
		}
	}
	printf("\nSau khi them dau cach gia cac chuoi 2 tu: \"%s\"",s);
}
void tinhTrungBinh(char s[]) {
	int i;
	int trungBinh=0;
	int sum=0;
	for(i=0;i<strlen(s); i++) {
		sum+=(int)s[i];
	}
	printf("\nGia tri trung binh cua chuoi: %d",(int)sum/strlen(s));
}
void xuatHien(char s[]){
	int i, j;
	int count;
	int time=0;
	for(i=0;i<strlen(s); i++) {
		count=0;
		for(j=0; j<i;j++) {
			if(s[j]==s[i]) {
				time=1;
				break;
			}
		}
		if(time==0) {
			for(j=i; j<strlen(s); j++) {
				if(s[j]==s[i]) {
					count++;
				}
			}
		  printf("\nKy tu '%c' xuat hien %d lan:",s[i], count);
       }
	}
}
void chenVaoGiua4va5Kytu(char s[]) {
	int i;
	int n = strlen(s);
	n++;
	for(i=n-1;i>5;i--) {
		s[i]=s[i-1];
	}
	s[5]='\n';
	    printf("\nSau khi them dau \"n\" vao giua chi so 4 va 5: \"%s\"",s);
}
void chenVaoGiuaKyTuInHoa(char s[]) {
	int i;
	int n=strlen(s);
	int temp=0;
	for(i=0; i<n; i++) {
		if((int)s[i]>=65 && (int)s[i]<=90 && (int)s[i+1]>=65 && (int)s[i+1]<=90) {
			temp = i+1;
			break;
		}
	}
  if(temp!=0) {
  	n++;
	for(i=n-1;i>temp;i--) {
		s[i]=s[i-1];
	}
  }else{
   	printf("\nKhong tim thay vi tri can them");
  }
	s[temp] = ' ';
	printf("\nSau khi them dau cach vao giua 2 chu so in Hoa: \"%s\"",s);
} 
void menu() {
	printf("*********Menu*********");
	printf("\n1.Nhap chuoi");
	printf("\n2.Kiem tra ky tu so");
	printf("\n3.Kiem tra in Hoa");
	printf("\n4.Kiem tra xua hien cua ky tu");
	printf("\n5.Kiem tra chuoi b co trong chuoi a va do dai hai chuoi");
	printf("\n6.Kiem tra tinh doi xung cua chuoi");
	printf("\n7.Chuoi co bao nhieu ky tu");
	printf("\n8.Cat tat ca dau cach o cuoi chuoi");
	printf("\n9.Cat tat ca dau cach o dau chuoi");
	printf("\n10.Gia 2 ky tu bat ky co 1 dau cach");
	printf("\n11.Tinh gia tri trung binh theo bang ma ASCII");
	printf("\n12.Dem xem moi ky tu xaut hien bao nhieu lan");
	printf("\n13.Chen vao giua chi so 4 va 5 dau \n");
	printf("\n14.Chen vao giua 2 ky tu in Hoa bat ky cua chuoi a ky tu \t");
}
int main() {
	char s[50];
	menu();
	int luaChon;
	while(1) {
	printf("\nMoi nhap vao 1 lua chon: ");
	scanf("%d", &luaChon);
	switch(luaChon) {
		case 1: 
		nhapChuoi(s);
		break;
		case 2: 
		kiemTraKyTuSo(s);
		break;
		case 3:
		kiemTraInHoa(s);
		break;
		case 4:
		kiemTraKyTu(s);
		break;
		case 5:
		kiemTraChuavaDoDai(s);
		break;
		case 6:
		kiemTraTinhDoiXung(s);
		break;
		case 7:
		kiemTraSoTu(s);
		break;
		case 8:
		catCuoiChuoi(s);
		break;
		case 9:
		catDauChuoi(s);
		break;
		case 10:
		dauCach(s);
		break;
		case 11: 
		tinhTrungBinh(s);
		break;
		case 12:
		xuatHien(s);
		break;
		case 13:
		chenVaoGiua4va5Kytu(s);
		break;
		case 14:
		chenVaoGiuaKyTuInHoa(s);
		break;	
		default:
			printf("\nKhong co lua chon nay!");
		return 0;
	}	
  }
  return 0;
}   
