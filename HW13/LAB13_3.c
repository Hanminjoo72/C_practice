//20210820 �ѹ��� ��ǻ���а�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define SIZE 10 
int main(void)
{
	int odd[SIZE], even[SIZE];
	int num , i;
	int oddIndex = 0, evenIndex = 0;
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number:");
		scanf("%d", &num);
		
		if (num % 2 == 0)
		{
			even[evenIndex] = num;
			evenIndex++;
		}
		//even[] �迭����
		else
		{
			odd[oddIndex] = num;
			oddIndex++;
		}
		//odd[] �迭����
	}	
	printf("\nȦ�� ���:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);

	printf("\n¦�� ���:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");
}