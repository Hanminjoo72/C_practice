//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int i, n = 5 , score , max = 0;

	for ( i = 0; i < n; i++ )
	{
		printf("Enter a score : ");
		scanf("%d", &score);

		if (max < score)
			max = score;
	}
	printf("The best score is %d", max);
}