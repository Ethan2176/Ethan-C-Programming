// Write a C program to find the sum of all even numbers between 1 and 100.

#include <stdio.h>

int main() {
    int sum = 0, p = 1;

    while (p <= 100) {
        if (p % 2 == 0) {
            sum += p;
        }
        p++;
    }

    printf("Sum of even numbers from 1 to 100: %d\n", sum);

    return 0;
}
       