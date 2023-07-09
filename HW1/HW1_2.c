#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int x, y , num , i ,sum = 0 , count =0;

	scanf("%d %d", &x , &y);
	
	for (i = 1; i <= 3; i++)
	{
		scanf("%d ", &num);

		if (x < num && num < y)
		{
			sum += num;
			count++;
		}
	}	
	printf("%d\n", sum);
	printf("%d\n", count);
}
