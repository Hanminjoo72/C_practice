//컴퓨터학과 20210820 한민주
#include<stdio.h>
int main(void)
{
	int number;
	int square;
	int cube;
	number = 7;
	square = number * number;
	cube = number * number * number;
	printf("The square number of %d is %d\n", number, square);
	printf("The cube number of %d is %d", number, cube);
}