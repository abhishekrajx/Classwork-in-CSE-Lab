#include <stdio.h>

// Function declaration
int reverseNumber(int num);

int main() {
    int number, reversed;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calling the function to reverse the number
    reversed = reverseNumber(number);

    // Printing the reversed number
    printf("Reversed number = %d\n", reversed);

    return 0;
}

// Function definition to reverse the number
int reverseNumber(int num) {
    int rev = 0;
    int remainder;

    while (num != 0) {
        remainder = num % 10;      // Extracts the last digit
        rev = rev * 10 + remainder; // Appends the digit to the reversed number
        num = num / 10;            // Removes the last digit from the original number
    }

    return rev;
}

