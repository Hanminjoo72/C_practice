//20210820 한민주 컴퓨터학과
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int money, cookie, bread, coke, p, q, r;
	cookie = 700;
	bread = 500;
	coke = 400;

	printf("Enter 금액 :");
	scanf("%d", &money);

	for (p = 1; money > (p * bread); p++)
	{
		for (q = 1; money > (q * cookie); q++)
		{
			for (r = 1; money > (r * coke); r++)
			{
				if (money == (p * bread) + (q * cookie) + (r * coke))
					printf("빵:%d 과자:%d 콜라:%d\n", p, q, r);
			}
		}
	}
}