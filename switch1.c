
#include <stdio.h>
#include <ctype.h>
int main() {
    int choice, n, i;
    int sum, fact, rem, temp, digits, power;

    printf("===== MENU =====\n");
    printf("1. Factorial Number\n");
    printf("2. Prime Number\n");
    printf("3. Perfect Number\n");
    printf("4. Armstrong Number\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &n);

    switch (choice) {

        case 1: printf("Factorial of Number");
            if (n < 0) {
                printf("Factorial is not defined for negative numbers.");
            } else {
                fact = 1;

                for (i = 1; i <= n; i++) {
                    fact = fact * i;
                }

                printf("Factorial = %d", fact);
            }
            break;

        case 2:  printf("Prime Number");
            if (n <= 1) {
                printf("%d is not a prime number.", n);
            } else {
                for (i = 2; i <= n / i; i++) {
                    if (n % i == 0) {
                        break;
                    }
                }

                if (i > n / i) {
                    printf("%d is a prime number.", n);
                } else {
                    printf("%d is not a prime number.", n);
                }
            }
            break;

        case 3: printf("Perfect Number between 1 to n");
            sum = 0;

            for (i = 1; i <= n / 2; i++) {
                if (n > 0 && n % i == 0) {
                    sum = sum + i;
                }
            }

            if (n > 0 && sum == n) {
                printf("%d is a perfect number.", n);
            } else {
                printf("%d is not a perfect number.", n);
            }
            break;

        case 4: printf("Armstrong Number");
            temp = n;
            sum = 0;
            digits = 0;

            if (n < 0) {
                printf("Negative numbers are not Armstrong numbers.");
                break;
            }

            if (n == 0) {
                digits = 1;
            } else {
                while (temp > 0) {
                    digits++;
                    temp = temp / 10;
                }
            }

            temp = n;

            while (temp > 0) {
                rem = temp % 10;
                power = 1;

                for (i = 1; i <= digits; i++) {
                    power = power * rem;
                }

                sum = sum + power;
                temp = temp / 10;
            }

            if (sum == n) {
                printf("%d is an Armstrong number.", n);
            } else {
                printf("%d is not an Armstrong number.", n);
            }
            break;

        default:
            printf("Invalid choice! Please select 1 to 4.");
    }

    return 0;
}


