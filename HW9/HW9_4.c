//20210820 컴퓨터학과 한민주
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
			printf("%d 번째 소수는 %d\n", count, num);
			count++;
		}
		num++;
	}
}

