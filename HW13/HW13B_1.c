//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i;

	printf("Enter one word:");
	scanf("%s", word);
	printf("word given:");
	for (i = 0; word[i] != 0; i++)
		printf("%c", word[i]);
	printf("\n");

	printf("new word:");
	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			newWord[i] = word[i] - 32;
		else if (word[i] >= 'A' && word[i] <= 'Z')
			newWord[i] = word[i] + 32;
		else
			newWord[i] = word[i];
	}
	newWord[i] = '\0';
	printf("%s\n", newWord);
}