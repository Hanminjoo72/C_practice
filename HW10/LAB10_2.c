#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void findNPrintBig(int n1, int n2); // 함수의 원형
int main(void)
{
	int num1, num2;
	printf("Enter two numbers :");
	scanf("%d %d", &num1, &num2);
	//num1, num2 를 읽는다;

	findNPrintBig(num1,num2);
	//findNPrintBig 호출;
}
void findNPrintBig(int n1, int n2) // 두 수중 큰 수를 찾아 출력한다.
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