//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	int num1, num2, answer;
	char ch;
	num1 = rand() % 100;
	num2 = rand() % 100;
	do
	{
		printf("%d + %d = ", num1, num2);
		scanf("%d", &answer);


		if (answer == num1 + num2)
			printf("Your answer is right.\n");
		else
			printf("Your answer is wrong.\n");

		while (getchar() != '\n');

		printf("Do you want to play again?(y/n)?");
		scanf("%c", &ch);

	} while (ch == 'y');
}
