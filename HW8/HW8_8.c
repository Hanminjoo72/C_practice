//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int  n, i;

	scanf("%d", &n);

	for (i = 2; i < n; i++) {
		if (n % i == 0)
		{
			break;
		}
	}
	if (i == n) 
		printf("�Ҽ��̴�");
	else
		printf("�Ҽ��� �ƴϴ�");
}