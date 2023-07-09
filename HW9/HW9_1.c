//20210820 한민주 컴퓨터학과
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	int num1, num2, answer, result;
	char op, ch;
	
	do{
	num1 = rand() % 100;
	num2 = rand() % 100;
	op = rand() % 4;

	switch (op) {
	case 0:
		printf("%d + %d = ", num1, num2);
		scanf("%d", &answer);
		result = num1 + num2;
		break;
	case 1:
		printf("%d - %d = ", num1, num2);
		scanf("%d", &answer);
		result = num1 - num2;
		break;
	case 2:
		printf("%d * %d = ", num1, num2);
		scanf("%d", &answer);
		result = num1 * num2;
		break;
	case 3:
		printf("%d / %d = ", num1, num2);
		scanf("%d", &answer);
		result = num1 / num2;
		break;
	}
	
	if (result == answer)
		printf("Your answer is right.\n");
	else
		printf("Your answer is wrong.\n");

	while (getchar() != '\n');

		printf("Do you want to play again?<y/n>");
		scanf("%c", &ch);
	} while (ch == 'y');
}