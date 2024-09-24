#include <stdio.h>
#include <time.h>
#define SIZE 10000

void is_prime (int num, int *res) {
    // if (num == 1) return 0;
    // if ((num % 2 == 0) || (num % 3) == 0) {
    //     return ((num == 2) || (num == 3))? 1: 0;
    // }

    // for (int i = 5; i*i <= num; i += 6) {
    //     if ((num % i == 0) || (num % (i+2) == 0)) return 0;
    // }

    // return 1;
    for (int i = 2; i*i <= num; i++) if (num == 1 || ((num % i) == 0)) *res = 0; else if (res == 0) return;
}


int main (int argc, char **argv) {

    clock_t start = clock();
    int res = 1;
    for (int i = 1; i <= SIZE; i++) {
        is_prime(i, &res);
        res = 1;
    }
    clock_t end = clock();
    printf("%.4f\n", (double)((end - start)));

    // if (res) {
    //     printf("%d is a prime number\n", num);
    // } else {
    //     printf("%d is NOT a prime number\n", num);
    // }

   
}
