//20210820 한민주 컴퓨터학과
#define SIZE 5
#include <stdio.h>
int main(void) {
	int arrayA[SIZE] = { 1 , 2 , 3 , 4 , 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i, same;

	for (i = 0; i < SIZE; i++) {
		arrayB[i] = arrayA[i];
		arrayC[i] = arrayA[SIZE - 1 - i];
	}
	//arrayB , arrayC 설정

	printf("ArrayA : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arrayA[i]);
	}
	printf("\n");
	printf("ArrayB : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arrayB[i]);
	}
	printf("\n");
	printf("ArrayC : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arrayC[i]);
	}
	printf("\n");

	same = 1;
	for (i = 0; i < SIZE; i++) {
		if (arrayA[i] != arrayB[i]) {
			same = 0;
			break;
		}
	}
	if (same == 1)
		printf("ArrayA와 ArrayB는 같다\n");
	else
		printf("ArrayA와 ArrayB는 다르다\n");

	for (i = 0; i < SIZE; i++) {
		if (arrayA[i] != arrayC[i]) {
			same = 0; 
			break;
		}
	}
	if (same == 0)
		printf("ArrayA와 ArrayC는 다르다\n");
	else
		printf("ArrayA와 ArrayC는 같다\n");
}