//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void strLength(char a[]);
void printUpperCase(char s[]);
int main(void)
{
	char str[81];
	printf("Enter a string:");
	scanf("%s", str);

	printf("���̴�:"); // strLength ȣ��
	strLength(str);
	printf("�빮�ڸ� ����ϸ�\n");
	printUpperCase(str); // printUpperCase ȣ��
}
void strLength(char a[])
{
	int i;
	for (i = 0; a[i] != '\0'; i++);
	printf("%d\n", i);
}
void printUpperCase(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i]);
	printf("\n");
}