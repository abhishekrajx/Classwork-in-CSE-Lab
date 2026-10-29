#include <stdio.h>
#include <math.h>

// Function prototypes
int binaryToDecimal(long long binaryNumber);
long long decimalToBinary(int decimalNumber);

int main() {
    int choice, decimalInput;
    long long binaryInput;

    printf("--- Number Conversion Menu ---\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binaryInput);
            printf("Binary %lld in decimal is: %d\n", binaryInput, binaryToDecimal(binaryInput));
            break;
            
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &decimalInput);
            printf("Decimal %d in binary is: %lld\n", decimalInput, decimalToBinary(decimalInput));
            break;
            
        default:
            printf("Invalid choice! Please run the program again.\n");
    }

    return 0;
}

// Function to convert binary to decimal
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;          // Extract the last digit
        binaryNumber /= 10;                     // Remove the last digit
        decimalNumber += remainder * pow(2, i); // Multiply by power of 2 and accumulate
        ++i;
    }
    
    return decimalNumber;
}

// Function to convert decimal to binary
long long decimalToBinary(int decimalNumber) {
    long long binaryNumber = 0;
    int remainder, i = 1;

    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;          // Get the remainder (0 or 1)
        decimalNumber /= 2;                     // Divide the number by 2
        binaryNumber += remainder * i;          // Position the remainder correctly
        i *= 10;                                // Shift the place value
    }
    
    return binaryNumber;
}

