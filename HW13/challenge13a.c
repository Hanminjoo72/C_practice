//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word1[81] , word2[81];
	int i, j, k , same = 1;

	printf("Enter the first word:");
	scanf("%s", word1);
	printf("Enter the second word:");
	scanf("%s", word2);

	for (i = 0; word1[i] != '\0'; i++);
	for (j = 0; word2[j] != '\0'; j++);

	if (i == j)
	{
		for (k = 0; k < j; k++) {
			if (word1[k] != word2[k])
			{
				same = 0;
				break;
			}
		}
		if (word1[k] == word2[k])
			printf("두 단어는 같다\n");
		else
			printf("두 단어는 다르다\n");
	}
	else
		printf("두 단어는 다르다\n");
}