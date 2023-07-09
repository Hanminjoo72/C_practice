//컴퓨터학과 20210820 한민주
#include<stdio.h>
int main(void)
{
	int midterm;
	int final;

	midterm = 100;
	final = 90;

	printf("이름\t\t중간\t학기말\t평균\n");
	printf("Suehee pak\t%d\t%d\t%d", midterm, final, (midterm + final) / 2);
}