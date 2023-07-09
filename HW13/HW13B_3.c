//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newword[81];
	int i, j, length = 0;

	printf("Enter one word : ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++);
		length = i;
	for (j = 0; j < length; j++)
		newword[length - 1 - j] = word[j];

	newword[length] = '\0';

	printf("The reversed word is %s\n", newword);
}