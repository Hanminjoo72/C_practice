//20210820 컴퓨터학과 한민주
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define SIZE 12
int indexSearch(int a[], int size, int searchKey);
int main(void)
{
	int incomes[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int income;
	int id;
	printf("탐색할 수입은? ");
	scanf("%d", &income);
	
	id = indexSearch(incomes, SIZE, income);

	if (id == -1)
		printf("수입 %d 를 갖는 달은 없습니다\n", income);
	else
		printf("수입 %d 를 갖는 첫번째 달은 %d 월입니다\n", income, id + 1);
	return 0;
}
// flag 변수 없이 작성해보자!! 
int indexSearch(int a[], int size, int searchKey)
{
	int i, found = 0;
	for (i = 0; i < size; i++)
		if (a[i] == searchKey)
			return i;
	return -1;
}