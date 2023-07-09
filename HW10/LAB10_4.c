#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printSum1ToN(int a);
int main() 
{ 
	int n;
	printf("Enter a number : ");
	scanf(" %d", &n);
	printSum1ToN(n); 
} 
void printSum1ToN(int a) 
{
	printf("1~ %dÀÇ ÇÕ:", a);
	int sum = 0;
	while (a > 0)
	{		
		sum += a;
		a--;
	}
	printf("%d", sum);
}