#include<stdio.h>
int main(){
	float num1, num2;
	char operator;
	printf("Enter the two operands:\n");
	scanf("%f %f", &num1, &num2);

	printf("Enter the operator:\n");
	scanf("%c", operator);

	switch(operator){
		case '+':
			printf("Result: %f", num1+num2);
			break;
		case '-':
			printf("Result: %f", num1-num2);
			break;
		case '*':
			printf("Result: %f", num1*num2);
			break;
		case '/':
			printf("Result: %f", num1/num2);
			break;
		default:
			printf("Operator Error");
			break;
		}
	return 0;
}

