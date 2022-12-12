#include"stdio.h"
#include"math.h"
int main() {
	float xA, yA, xB, yB, xC, yC, P, chuVi, dienTich;
	float AB, BC, CA;
	printf("\nnhap vao toa do A(xA, yA): ");
	scanf("%f%f", &xA, &yA);
	printf("\nnhap vao toa do B(xB, yB): ");
	scanf("%f%f", &xB, &yB);
	printf("\nnhap vao toa do C(xC, yC): ");
	scanf("%f%f", &xC, &yC);
	AB = sqrt((pow((xB-xA),2)) + pow((yB-yA),2));
	BC = sqrt((pow((xC-xB),2)) + pow((yC-yB),2));
	CA = sqrt((pow((xA-xC),2)) + pow((yA-yC),2));
	printf("\nAB=%.2f, BC=%.2f, CA=%.2f", AB,BC,CA);
	if(AB+BC>CA && CA+BC>AB && BC+CA>AB) {
		printf("\nABC tao thanh tam giac ");
		if(AB==CA || AB==BC || CA==BC) {
			printf("\ntam giac ABC can");
		} else{
			printf("\ntam giac ABC khong can");
		}
		chuVi = AB+BC+CA;
		 printf("\nchu vi tam giac ABC = %.2f", chuVi);
		 P = chuVi/2;
		 dienTich = sqrt(P*(P-AB)*(P-BC)*(P-CA));
		printf("\nDien tich tam giac = %.2f", dienTich);
	}else{
		printf("\nba toa do A B C khong tao thanh tam giac ");
	}
}
