#include<stdio.h>
int main() {
	double num1, num2, result;
	char op;
	
	printf("input values of num1 = ");
	scanf("%lf", &num1);
	printf("\ninput values of num2 = ");
	scanf("%lf", &num2);
	fflush(stdin);
	printf("\ninput operator op: ");
	scanf("%c", &op);
	switch(op) {
		case '+':
			printf("\nresult = num1 + num2 = %g", num1+num2);
			break;
	    case '-':
			printf("\nresult = num1 - num2 = %g", num1-num2);
			break;	
		case '*':
			printf("\nresult = num1 * num2 = %g", num1*num2);
			break;
		case '/':
			if(num2==0) {
			  printf("\nDivide by 0");
			}else{
				printf("\nresult = num1 / num2 = %g", num1/num2);
			}
			break;	
		default:
		printf("\nOp is not supported");			
	}	
}

