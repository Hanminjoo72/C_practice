//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[20];
	int i, sum = 0;

	printf("Enter one word : ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
			sum += word[i] - '0';
	}
	printf("%d\n", sum);
}