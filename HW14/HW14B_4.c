//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[20];
	printf("�ܾ �Է��ϼ���(��ĭ����):");
	scanf("%s", str);

	printf("������ %d\n", calculatePoint(str));
}
// calculatePoint �Լ��� ����
int calculatePoint(char str[])
{
	int i ,sum = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'A' && str[i] <= 'Z')
			sum += str[i] - 64;
		else if (str[i] >= 'a' && str[i] <= 'z')
			sum += str[i] - 96;

	return sum;
}