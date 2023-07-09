//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[81];
	int i;
	int length;

	printf("Enter a string:");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++);

	length = i;
	printf("길이는 %d\n", length);
	for (i = 0; i < length; i++)
		printf("%c\n", s[length - i - 1]);
}