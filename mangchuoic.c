#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>

int isSubstring(char s1[], char s2[])
{
    int M = strlen(s1);
    int N = strlen(s2);
    int i;

    for (i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

void Del(char s[],int index) {
    int i;
    int n = strlen(s);
    for (i = index+1; i < n; i++)
    {
        s[i-1] = s[i];
    }
    s[n-1] = '\0';
}

int main() {
    int N,i,j,M;
    char a[50][30];
    while(!(N<=50 && N>0)) {
        printf("Nhap N: ");
        scanf("%d",&N);
        if(!(N<=50 && N>0)) {
            printf("N phai thuoc (0,50]\n");
        }
    }
    getchar();
    for (i = 0; i < N; i++)
    {
        printf("Nhap chuoi tai index %d: ",i);
        gets(a[i]);
    }
    char *min = a[0];
    char *max = a[0];
    for (i = 0; i < N; i++)
    {
        if(strlen(a[i]) > strlen(max)) {
            max = a[i];
        }
        if(strlen(a[i]) < strlen(min)) {
            min = a[i];
        }
    }
    printf("\nChuoi co kich thuoc nho nhat: %s\nChuoi co kich thuoc lon nhat: %s",min,max);
    int sum=0;
    for (i = 0; i < N; i++)
    {
        sum += strlen(a[i]);
    }
    printf("\nKich thuoc trung binh chuoi: %0.2f",sum/N);
    printf("\nCac chuoi lon hon kich thuoc chuoi trung binh: ");
    for (i = 0; i < N; i++)
    {
        if(strlen(a[i]) > sum/N) {
            printf("%s ",a[i]);
        }
    }
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (strlen(a[i]) > strlen(a[j])) {
                char *temp = a[i];
                *a[i] = a[j];
                *a[j] = temp;
            }
        }
    }
    printf("\nMang sap xep tang dan: ");
    for (i = 0; i < N; i++)
    {
        printf("%s ",a[i]);
    }
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (strlen(a[i]) < strlen(a[j])) {
                char *temp = a[i];
                *a[i] = a[j];
                *a[j] = temp;
            }
        }
    }
    printf("\nMang sap xep giam dan: ");
    for (i = 0; i < N; i++)
    {
        printf("%s ",a[i]);
    }
    char *minas = a[0];
    char *maxas = a[0];
    for (i = 0; i < N; i++)
    {
        if(a[i] > maxas) {
            maxas = a[i];
        }
        if(a[i] < minas) {
            minas = a[i];
        }
    }
    printf("\nChuoi nho nhat: %s\nChuoi lon nhat: %s",minas,maxas);
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (a[i] > a[j]) {
                char *temp = a[i];
                *a[i] = a[j];
                *a[j] = temp;
            }
        }
    }
    printf("\nMang sap xep tang dan theo bang ASCII: ");
    for (i = 0; i < N; i++)
    {
        printf("%s ",a[i]);
    }
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (a[i] < a[j]) {
                char *temp = a[i];
                *a[i] = a[j];
                *a[j] = temp;
            }
        }
    }
    printf("\nMang sap xep giam dan theo bang ASCII: ");
    for (i = 0; i < N; i++)
    {
        printf("%s ",a[i]);
    }
    char st[30];
    printf("\nNhap chuoi st: ");
    gets(st);
    printf("\nChuoi co kich thuoc bang chuoi st: ");
    for (i = 0; i < N; i++)
    {
        if(strlen(st) == strlen(a[i])) {
            printf("%s ",a[i]);
        }
    }
    printf("\nChuoi co chua chuoi st: ");
    for (i = 0; i < N; i++)
    {
        if(strstr(a[i], st) != NULL) {
            printf("%s ",a[i]);
        }
    }
    printf("\nCac chuoi co tinh doi xung: ");
    for (i = 0; i < N; i++)
    {
        char reS[30];
        for (j = 0; j < strlen(a[i]); j++)
        {
            reS[j] = a[i][(strlen(a[i])-j-1)];
        }
        if(strcmp(reS,a[i])==0) {
            printf("%s ",a[i]);
        }
    }
    printf("\nCac chuoi la dia chi email chuan: ");
    for (i = 0; i < N; i++)
    {
        int check = 0;
        int c = 0,cdot = 0;
        for (j = 0; j < strlen(a[i]); j++)
        {
            if(c==0 && a[i][j] == '@' && j != 0) {
                c = j;
                continue;
            } else if(c==0 && a[i][j] == '@'  && j == 0) {
                check = 1;
                break;
            } else if(c==0 && a[i][j] != '@') {
                if(!(a[i][j] >= 'a' && a[i][j] <= 'z' || a[i][j] >= 'A' && a[i][j] <= 'Z' || a[i][j] >= '0' && a[i][j] <= '9')) {
                    check = 1;
                    break;
                }
            }
            if(c!=0 && a[i][j] == '.' && j != (c+1) && cdot == 0) {
                cdot = 1;
                continue;
            } else if(c!=0 && a[i][j] == '.' && j == (c+1) && cdot == 0) {
                check = 1;
                break;
            } else if(c!=0 && a[i][j] != '.' && cdot == 0) {
                if(!(a[i][j] >= 'a' && a[i][j] <= 'z' || a[i][j] >= 'A' && a[i][j] <= 'Z' || a[i][j] >= '0' && a[i][j] <= '9')) {
                    check = 1;
                    break;
                }
            }
            if(c!=0 && cdot != 0) {
                if(!(a[i][j] >= 'a' && a[i][j] <= 'z' || a[i][j] >= 'A' && a[i][j] <= 'Z' || a[i][j] >= '0' && a[i][j] <= '9')) {
                    check = 1;
                    break;
                }
            }
        }
        if(check == 0) {
            printf("%s ", a[i]);
        }
    }
    printf("\nCac chuoi co chua ki tu so: ");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < strlen(a[i]); j++) {
            if(a[i][j] >= '0' && a[i][j] <= '9') {
                printf("%s ",a[i]);
                break;
            }
        }
    }
    printf("\nCac chuoi co chua ki tu in hoa: ");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < strlen(a[i]); j++) {
            if(a[i][j] >= 'A' && a[i][j] <= 'Z') {
                printf("%s ",a[i]);
                break;
            }
        }
    }
    printf("\nNhap ki tu c: ");
    char c;
    scanf("%c",&c);
    printf("\nCac chuoi co chua ki tu c: ");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < strlen(a[i]); j++) {
            if(a[i][j] == c) {
                printf("%s ",a[i]);
                break;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("\nChuoi thu %d trong a co %d ki tu",(i+1),(strlen(a[i])));
    }
    char kt;
    printf("\nNhap mot ki tu de chen vao vi tri thu 5 cua chuoi cuoi cung: ");
    scanf("%c",&kt);
    char rep[30];
    for (i = 0; i <= strlen(a[(N-1)]); i++)
    {
        if(i < 4) {
            rep[i] = a[(N-1)][i];
        }
        if(i==4) {
            rep[i] = kt;
        }
        if(i > 4) {
            rep[i] = a[(N-1)][i-1];
        }
    }
    printf("\nChuoi sau khi chen: %s",a[(N-1)]);
    while(!(M > 0 && M < N)) {
        printf("\nNhap M: ");
        scanf("%d",&M);
        if(!(M > 0 && M < N)) {
            printf("M phai thuoc (0,N)");
        }
    }
    char Ma[50][30];
    for (i = 0; i < M; i++)
    {
        printf("Nhap chuoi tai index %d: ",i);
        gets(Ma[i]);
    }
    for (i = 0; i < M; i++)
    {
        int count = 0;
        for (j = 0; j < N; j++)
        {
            if(strcmp(Ma[i],a[j])) {
                count++;
            }
        }
        printf("\nChuoi thu %d trong M xuat hien %d lan trong N", (i+1),count);
    }
    char chuoi[] = "";
    for (i = 0; i < N; i++)
    {
        strcat(chuoi,a[i]);
    }
    printf("\nChuoi sau khi noi: %s",chuoi);
    printf("\nCac chuoi chua chuoi dau tien: ");
    for (i = 1; i < N; i++)
    {
        if(strstr(a[i],a[0]) != NULL) {
            printf("%s ",a[i]);
        }
    }
    if(isSubstring("hello",a[0]) == 0) {
        printf("\nChuoi dau tien co bat dau bang\"hello\"");
    }
    for (i = 0; i < N; i++)
    {
        int subsum=0;
        for (j = 0; j < strlen(a[i]); j++)
        {
            subsum += a[i][j];
        }
        printf("Gia tri trung binh cua chuoi thu %d la: %0.2f",(i+1),(subsum/strlen(a[i])));
        
    }
    printf("\nCac chuoi lon hon chuoi nho nhat: ");
    for (i = 0; i < N; i++)
    {
        if(strlen(a[i]) > strlen(min)) {
            printf("%s ",a[i]);
        }
    }
    printf("\nCac chuoi be hon chuoi lon nhat: ");
    for (i = 0; i < N; i++)
    {
        if(strlen(a[i]) < strlen(max)) {
            printf("%s ",a[i]);
        }
    }
    int len;
    printf("\nNhap vao do dai xac dinh: ");
    scanf("%d",&len);
    printf("\nCac chuoi co do dai bang do dai vua nhap: ");
    for (i = 0; i < N; i++)
    {
        if(strlen(a[i]) == len) {
            printf("%s ",a[i]);
        }
    }
    int tc=0;
    for (i = 0; i < strlen(a[(N-1)]); i++){
        if(a[(N-1)][i] >= 'a' && a[(N-1)][i] <= 'z' || a[(N-1)][i] >= 'A' && a[(N-1)][i] <= 'Z') {
            tc++;
        }
    }
    printf("\nChuoi N-1 co so tu la: %d",tc);
    for (i = 0; i < strlen(a[1]); i++)
    {
        a[1][i] = (char)toupper(a[1][i]);
    }
    printf("\nChuoi thu hai sau khi chuyen thanh in hoa: %s",a[1]);
    for (i = (strlen(a[(N-1)])-1); i >= 0; i--)
    {
        if(a[(N-1)][i] == ' ') {
            del(a[(N-1)],i);
        } else if(a[(N-1)][i] != ' ') {
            break;
        }
    }
    printf("\nChuoi sau khi cat ki tu trang o cuoi: %s",a[(N-1)]);
    for (i = 0; i < strlen(a[(N-1)]); i++)
    {
        if(a[(N-1)][i] == ' ') {
            del(a[(N-1)],i);
        } else if(a[(N-1)][i] != ' ') {
            break;
        }
    }
    printf("\nChuoi sau khi cat ki tu trang o dau: %s",a[(N-1)]);
    for (i = 0; i < strlen(a[(N-1)]); i++)
    {
        if(a[(N-1)][i] == ' ' && i != (strlen(a[(N-1)]) - 1)) {
            if(a[(N-1)][i+1] == ' ') {
                del(a[(N-1)],i);
            }
            
        }
        if(a[(N-1)][i] == ' ' && i != 0) {
            if(a[(N-1)][i-1] == ' ') {
                del(a[(N-1)],i);
            }
        }
    }
    printf("\nChuoi sau khi cat ki tu trang thua o giua: %s",a[(N-1)]);
    return 0;
}
