//20210820 한민주 컴퓨터학과
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
		//even[] 배열생성
		else
		{
			odd[oddIndex] = num;
			oddIndex++;
		}
		//odd[] 배열생성
	}	
	printf("\n홀수 출력:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);

	printf("\n짝수 출력:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");
}