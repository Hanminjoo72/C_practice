//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int count = 1 , num = 0;

	while (count <= 10)
	{	
		int i = 2;
		do{	
			if (num % i == 0)			
				break;
			else
				i++;
		} while (i < num);
		if (num == i)
		{
			printf("%d ��° �Ҽ��� %d\n", count, num);
			count++;
		}
		num++;
	}
}

