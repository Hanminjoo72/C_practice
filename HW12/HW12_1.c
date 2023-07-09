//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, score[20];

	printf("Enter the number of scores<<=20> : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		printf("Enter a score : ");
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < num; i++) {
		printf("Student %d :", i + 1);
		
		for (int j = 0; j < score[i]; j++)
			printf("*");
		printf("\n");
	}
}