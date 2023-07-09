// 컴퓨터학과 20210820 한민주 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int base, height, area, width, circumference;

	printf("밑변과 높이를 입력하세요 : ");
	scanf("%d %d", &base, &height);

	area = base * height / 2;

	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d이다\n", base, height, area);

	printf("직사각형의 가로와 높이를 입력하세요 : ");
	scanf("%d %d", &width, &height);

	area = width * height;
	circumference = width * 2 + height * 2;

	printf("가로와 높이가 각각 %d와 %d인 직사각형의 둘레와 넓이는 %d와 %d이다", width, height, circumference, area);
}