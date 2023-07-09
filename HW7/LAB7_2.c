//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num1, num2, result;
	char operator;

	printf("Enter an operator : ");
	scanf("%c", &operator);
	printf("Enter the first operand : ");
	scanf("%d", &num1);
	printf("Enter the second operand : ");
	scanf("%d", &num2);

	switch (operator)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	}
		printf("%d %c %d = %d \n", num1, operator , num2, result);	
}