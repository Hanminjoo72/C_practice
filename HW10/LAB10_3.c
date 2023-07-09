#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
    int Tom, Mary, i, j;

    printf("Tom's score? ");
    scanf("%d", &Tom);
    printf("Mary's score? ");
    scanf("%d", &Mary);
    printf("---------- Score Histogram ----------\n");

    printf("Tom     :");
    for (i = 0; i < Tom; i++)
        printf("*");
    printf("<%02d>\n", Tom);

    printf("Mary    :");
    for (j = 0; j < Mary; j++)
        printf("*");
    printf("<%02d>\n", Mary);
}