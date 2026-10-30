#include <stdio.h>
#include <math.h>

// Function declaration
void printPrimeFactors(int n);

int main() {
    int number;

    // Take user input
    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1 || number <= 1) {
        printf("Please enter a valid integer greater than 1.\n");
        return 1;
    }

    printf("The prime factors of %d are: ", number);
    
    // Function call
    printPrimeFactors(number);
    
    printf("\n");
    return 0;
}

// Function to find and print all prime factors of a given number
void printPrimeFactors(int n) {
    // 1. Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // 2. n must be odd at this point. Loop through odd numbers up to sqrt(n)
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // 3. If n is still greater than 2, then the remaining n is prime
    if (n > 2) {
        printf("%d ", n);
    }
}

