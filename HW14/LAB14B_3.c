//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void strLength(char a[]);
void printUpperCase(char s[]);
int main(void)
{
	char str[81];
	printf("Enter a string:");
	scanf("%s", str);

	printf("길이는:"); // strLength 호출
	strLength(str);
	printf("대문자만 출력하면\n");
	printUpperCase(str); // printUpperCase 호출
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