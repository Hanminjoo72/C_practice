#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void findNPrintBig(int n1, int n2); // �Լ��� ����
int main(void)
{
	int num1, num2;
	printf("Enter two numbers :");
	scanf("%d %d", &num1, &num2);
	//num1, num2 �� �д´�;

	findNPrintBig(num1,num2);
	//findNPrintBig ȣ��;
}
void findNPrintBig(int n1, int n2) // �� ���� ū ���� ã�� ����Ѵ�.
{
	int big = 0;

	if (n1 < n2) {
		big = n2;
	}
	else if (n1 > n2) {
		big = n1;
	}
	printf("Big number is %d.", big);
}