//20210820 ��ǻ���а� �ѹ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printFibo(int n) {
    int current = 1; // ���� ��
    int next = 1;    // ���� ��
    int temp;        // �ӽ� ����
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

	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����) : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		printFibo(i);
	printf("\n");
}