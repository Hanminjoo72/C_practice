#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void printManyStars(int num);
int main(void)
{
	printManyStars(3);
	printManyStars(4);
	printManyStars(5);
}
void printManyStars(int num) // 함수의 정의, num 만큼 *를 출력한다
{
	int i;

	for (i = 0; i < num; i++) {
		printf("*");
	}
	printf("\n");
}
