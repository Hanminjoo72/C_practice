
// 컴퓨터학과 20210820 한민주 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int radius;
	double area;
	double circumference;

	printf("Enter a radius : ");
	scanf("%d", &radius);

	area = 3.141592 * radius * radius;

	circumference = 3.141592 * 2 * radius;
	
	printf("The area of a circle with %d : %f\n", radius, area);
	printf("The circumference of a circle with %d : %f", radius, circumference);



}