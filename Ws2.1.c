#include<stdio.h>
float nhapLieu(float number) {
	printf("Nhap vao gia tri number: ");
	scanf("%f", &number);
	return number;
}
float tinhTong(float number1, float number2) {
	float sum = number1 + number2;
	return sum;
}
float tinhHieu(float number1, float number2) {
	float minus = number1 - number2;
	return minus;
}
float tinhNhan(float number1, float number2) {
	float product;
	product = number1*number2;
	return product;
}
float tinhChia(float number1, float number2) {
	float division;
	division = number1/number2;
	return division;
}
float timUocChungLonNhat(float number1, float number2) {
	float UCLN;
	if(number1>=0 && number2>=0) {
		if(number1==0 && number2==0) {
			return 0;
	   }else if(number1==0 || number2==0) {
	    	return 0;
	   }else{
	 	while(number1!=number2) {
			if(number1>number2) {
				number1-=number2;
			}else{
				number2-=number1;
			}
		}
		return UCLN = number1;
    	}
    }else{
	    return 0;
    }
}
float timBoiChungNhoNhat(float number1, float number2) {
	float BCNN;
	if(number1>=0 && number2>=0) {
		if(number1==0 && number2==0) {
			return 0;
	   }else if(number1==0 || number2==0) {
	    	return 0; 
	   }else{
	   	BCNN = number1*number2;
	 	while(number1 != number2) {
			if(number1 > number2) {
				number1-=number2;
			}else{
				number2-=number1;
			}
	      }	
    	}
    return BCNN/number1;
 }else{
 	return 0;
 }

}
int main() {
	float number1, number2;
	number1 = nhapLieu(number1);
	number2 = nhapLieu(number2);
	printf("\nPhep Tong cua %g + %g = %g",number1, number2, tinhTong(number1, number2));
	printf("\nPhep Hieu cua %g - %g = %g",number1, number2, tinhHieu(number1, number2));
	printf("\nphep Tich cua %g * %g = %g",number1, number2, tinhNhan(number1, number2));
	printf("\nPhap Chia cua %g / %g = %g",number1, number2, tinhChia(number1, number2));
	if(timUocChungLonNhat(number1, number2)!=0) {
		printf("\nUoc so chung lon nhat cua %g va %g la %g",number1, number2, timUocChungLonNhat(number1, number2));
	}else{
		printf("\nKhong ton tai Uoc chung lon nhat");
	}
	if(timBoiChungNhoNhat(number1, number2)!=0) {
		printf("\nBoi chung nho nhat cua %g va %g la %g",number1, number2, timBoiChungNhoNhat(number1, number2));
	}else{
		printf("\nKhong ton tai Boi chung nho nhat");
	}
} 
