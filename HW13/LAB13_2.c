//20210820 한민주 컴퓨터학과
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[12] = { 11 , 22 , 33 , 44 , 55 , 66 };
	int i, income, month = 0, flag = 0;

	printf("탐색할 수입은? ");
	scanf("%d", &income);

	for (i = 0; i < 12; i++)
	{
		if (income == incomes[i])
		{		
			flag = 1;
			break;
		}		
	}
	if (flag)
		printf("수입 %d를 갖는 첫번째 달은 %d월입니다\n\n", income, i + 1);
	else
		printf("수입 %d를 갖는 달은 없습니다\n\n", income);
}