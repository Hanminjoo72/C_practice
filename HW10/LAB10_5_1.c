#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void print_divisor(int num);
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	print_divisor(num);
}
void print_divisor(int num)
{
	for (int i = 1; i <= num; i++)
		if (num % i == 0) {
			printf("%d\n", i);
		}
}
