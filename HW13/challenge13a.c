//20210820 ��ǻ���а� �ѹ���
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
			printf("�� �ܾ�� ����\n");
		else
			printf("�� �ܾ�� �ٸ���\n");
	}
	else
		printf("�� �ܾ�� �ٸ���\n");
}