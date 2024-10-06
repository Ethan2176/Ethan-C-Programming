#include <stdio.h>
#include <math.h>

int main() {
    int number;

    printf("Enter a number of your choice: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("The number %d is not a prime number\n", number);
    } else {
        int isPrime = 1; // Assume the number is prime initially

        for (int i = 2; i <= sqrt(number); ++i) {
            if (number % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }

        if (isPrime) {
            printf("The number %d is a prime number\n", number);
        } else {
            printf("The number %d is not a prime number\n", number);
        }
    }

    return 0;
}