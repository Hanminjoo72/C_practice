#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)
{
	int binary[8] , num , blndex = 0;

	printf("Enter ¾ç¼ö(<256):");
	scanf("%d", &num);

	while (num != 0)
	{
		binary[blndex++] = num % 2;
		num = num / 2;
	}
	reverse(binary, blndex);
	printArray(binary, blndex);
}
void printArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d", a[i]);
	printf("\n");
}
void reverse(int a[], int size)
{
	int i, temp;

	for (i = 0; i < size / 2; i++) {
		temp = a[size - i - 1];
		a[size - i - 1] = a[i];
		a[i] = temp;
	}
}