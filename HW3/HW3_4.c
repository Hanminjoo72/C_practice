// ��ǻ���а� 20210820 �ѹ��� 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int base, height, area, width, circumference;

	printf("�غ��� ���̸� �Է��ϼ��� : ");
	scanf("%d %d", &base, &height);

	area = base * height / 2;

	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�̴�\n", base, height, area);

	printf("���簢���� ���ο� ���̸� �Է��ϼ��� : ");
	scanf("%d %d", &width, &height);

	area = width * height;
	circumference = width * 2 + height * 2;

	printf("���ο� ���̰� ���� %d�� %d�� ���簢���� �ѷ��� ���̴� %d�� %d�̴�", width, height, circumference, area);
}