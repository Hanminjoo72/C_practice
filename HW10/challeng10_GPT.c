//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printFibo(int n) {
    int current = 1; // 현재 값
    int next = 1;    // 다음 값
    int temp;        // 임시 변수
    int i;

    if (n == 1 || n == 2)
        printf("%d ", current);
    else {
        for (i = 3; i <= n; i++) {
            temp = next;
            next += current;
            current = temp; // 2
        }
        printf("%d ", next);
    }
}
int main(void)
{
	int num, i;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수) : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		printFibo(i);
	printf("\n");
}