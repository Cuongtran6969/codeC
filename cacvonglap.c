#include<stdio.h>
#include<math.h>
int main() {
	//vong lap while: con duoc goi la vong lap khong xac dinh
	//vi khong biet duco so lan lap la bao nhieu
	//*cu phap:
	//while(dieu kien) {
	//khoi lenh}
	
    printf("\n1. Nhap 1 so bat ky");
    printf("\n2. Nhap kiem tra tinh chan le");
	printf("\n3. Nhap tinh chinh phuong");
	printf("\n4. Nhap tinh nguyen to");
	printf("\n5. Thoat");
	printf("\n********************************");
	int option;
	int number;
	int j=2;
	printf("\nNhap 1 so bat ky: ");
	scanf("%d", &number);
	int m = (int)sqrt(number);
	while(1) {
		printf("\nMoi ban nhap mot lua chon bat ky: ");
		scanf("%d", &option);
		switch(option) {
			case 1: 
			    printf("\n1. Nhap 1 so bat ky: ");
			    scanf("%d", &number);
			break;
			case 2:
				if(number%2==0) {
					printf("%d la so chan", number);
				}else{
					printf("%d la so le", number);
				}
			break;
			case 3:
                      if(number==pow(m,2)) {
                	printf("\n%d la so chinh phuong", number);
                     }else{
                	printf("\n%d khong phai la so chinh phuong", number);
                      }
			break;
			case 4:
				for(j; j<m; j++){
						if(number%j==0){
						printf("\n%d Khong phai la so nguyen to", number);
					}else{
						printf("\n% la so nguyen to", number);
					 }
					}
					
			break;
		    	case 5:
			    	printf("Good bye");
			    	return 0;
				default:
				printf("\nKhong co lua chon nay");	
		}
	}
} 
