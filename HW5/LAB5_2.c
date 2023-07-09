// 컴퓨터학과 20210820 한민주 
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	char ch;
	int value;

	printf("Enter an alphabet : ");
	scanf("%c", &ch);

	printf("%c %d \n", ch, ch);

	printf("Enter a ascii value : ");
	scanf("%d", &value);

	printf("%d  %c \n", value, value);
}