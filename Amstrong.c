#include"stdio.h" 
#include"math.h"
int main(){
   int n, originalNumber, remainder, result = 0, count = 0 ;

   printf("Nhap so nguyen: ");
   scanf("%d", &n);
   originalNumber = n;

   while (originalNumber != 0){
       originalNumber /= 10;
       ++count;
   }
   originalNumber = n;
   while(originalNumber != 0){
       remainder = originalNumber%10;
       result += pow(remainder, count);
       originalNumber /= 10;
   }
   if(result == n){
       printf("%d la mot so Armstrong.", n);
   }else{
       printf("%d khong la mot so Armstrong.", n);
   }
   return 0;
}
//
//int check_armstrong(int);
//int power(int, int);
//int main () {
//  int c, a, b;
//  printf("nhap hai so nguyen\n");
//  scanf("%d%d", &a, &b);
//  for (c = a; c <= b; c++) {
//     if (check_armstrong(c) == 1)
//        printf("%d\n", c);
//  }
//  return 0;
//}
//int check_armstrong(int n) {
//  long long sum = 0, temp;
//  int remainder, digits = 0;
//  temp = n;
//  while (temp != 0) {
//     digits++;
//     temp = temp/10;
//  }
//  temp = n;
//  while (temp != 0) {
//     remainder = temp%10;
//     sum = sum + power(remainder, digits);
//     temp = temp/10;
//  }
//  if (n == sum)
//     return 1;
//  else
//     return 0;
//}
//int  power(int n, int r) {
//  int c, p = 1;
//  for (c = 1; c <= r; c++)
//     p = p*n;
//  return p;  
//}


