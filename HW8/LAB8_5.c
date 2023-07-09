//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int i , j , rows, columns;
	
	printf("Enter the number of rows : ");
	scanf("%d", &rows);
	printf("Enter the number of columns : ");
	scanf("%d", &columns);

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < columns)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}