//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[100];
	int i, n = 0, sum = 0;

	printf("Enter a word:");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++) {
		if ('0' <= word[i] && word[i] <= '9')
			n = n * 10 + word[i] - '0';
		else
		{
			sum += n;
			n = 0;
		}
	}
	sum += n;
	printf("글자 안의 수의 합은 %d\n", sum);
}