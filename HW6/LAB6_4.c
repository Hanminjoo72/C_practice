//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int score;
	char grade;

	printf("Enter a student grade(A or F) : ");
	scanf("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your GOOD score : ");
		scanf("%d", &score);

		printf("������ %d���̸� ���� ������ �´±���. ��� �������ؿ�.", score);
	}
	else if (grade == 'F')

	{
		printf("Enter your BAD score : ");
		scanf("%d", &score);

		printf("������ %d�̶�� �� ������ �ؾ߰ڳ׿�.", score);
	}

}