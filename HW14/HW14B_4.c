//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[20];
	printf("단어를 입력하세요(빈칸없이):");
	scanf("%s", str);

	printf("점수는 %d\n", calculatePoint(str));
}
// calculatePoint 함수의 정의
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