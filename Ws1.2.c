#include<stdio.h>
int main() {
	int income, n, ti, tf, pa = 9000000, pd=3600000;
	float it;
	printf("Input your income of this year: ");
	scanf("%d", &income);
	printf("\nInput number of dependent: ");
	scanf("%d", &n);
	tf = 12*(pa+(n*pd));
	printf("\nTax-free income: %d", tf);
	ti = income - tf;
	if(ti<=0) {
		printf("\nTaxable income: 0");
		printf("\nIncome tax: 0");
	}else{
		if(ti<=5000000) {
			it=(ti)*0.05;
		}else if(ti>=5000001 && ti<=10000000) {
		    it=(ti-5000000)*0.1 + (5000000*0.05);	
		}else if(ti>=10000001 && ti<=18000000) {
			it=(ti-10000000)*0.15 + (5000000*0.1) + (5000000)*0.05;
		}else {
			it=(ti-18000000)*0.2 + (8000000*0.15) + (5000000*0.1) + (5000000*0.05);
		}
		printf("\nTaxable income: %d", ti);
		printf("\nIncome tax: %g", it);
	}
}
