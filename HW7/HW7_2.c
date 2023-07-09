//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num1, num2, result1 ,result2;
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
		result1 = num1 + num2;
		break;
	case '*':
		result1 = num1 * num2;
		break;
	case '-':
		result1 = num1 - num2;
		break;
	case '/':
		result1 = num1 / num2;
		break;
	}	
		printf("%d %c %d = ", num1, operator , num2);
		scanf("%d", &result2);

		if (result2 == result1)
		{
			printf("Right answer\n");
		}	
		else			
			printf("Wrong!\n%d is the right answer\n", result1);
}