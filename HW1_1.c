#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
   
    scanf("%d", &num);

    int found = 0;
    for (int i = 2; i <= num / 2; i++) {
        int is_prime_i = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime_i = 0;
                break;
            }
        }
        if (is_prime_i) {
            int complement = num - i;
            int is_prime_complement = 1;
            if (complement >= 2) {
                for (int j = 2; j <= complement / 2; j++) {
                    if (complement % j == 0) {
                        is_prime_complement = 0;
                        break;
                    }
                }
            }
            else {
                is_prime_complement = 0;
            }
            if (is_prime_complement) {
                printf("%d + %d = %d\n", i, complement, num);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("no expression.\n");
    }
    return 0;
}








