// 컴퓨터학과 20210820 한민주 
#define _CRT_SECURE_NO_WARNINGS
#define BASE 32
#define CONVERSION_FACTOR 9.0/5.0
#include<stdio.h>

int main(void)
{
	double celsius;
	double fahrenheit;

	printf("Enter a celsius temperature : ");
	scanf("%lf", &celsius);

	fahrenheit = celsius * CONVERSION_FACTOR + BASE;

	printf("Fahrenheit Equivalent : %f", fahrenheit);
}