//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 81
#include <stdio.h>
int main(void)
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countU = 0 , countO = 0;
	int i;

	printf("���ڿ� �Է�(���ڼ� %d ����) : ", MAX_STRING);
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A') {
			countA++;
		}
		else if (str[i] == 'e' || str[i] == 'E') {
			countE++;
		}
		else if (str[i] == 'i' || str[i] == 'I') {
			countI++;
		}
		else if (str[i] == 'o' || str[i] == 'O') {
			countO++;
		}
		else if (str[i] == 'u' || str[i] == 'U') {
			countU++;
		}
	}
	printf("a or A : %d ��\n", countA);
	printf("e or E : %d ��\n", countE);
	printf("i or I : %d ��\n", countI);
	printf("o or O : %d ��\n", countO);
	printf("u or U : %d ��\n", countU);
}