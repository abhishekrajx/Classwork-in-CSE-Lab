#include <stdio.h>
#include <stdlib.h>

// Function declarations
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);
void displayMenu();

int main() {
    int choice;
    float inputTemp, convertedTemp;

    while (1) {
        displayMenu();
        printf("Enter your choice (1-3): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &inputTemp);
                convertedTemp = celsiusToFahrenheit(inputTemp);
                printf("%.2f°C is equal to %.2f°F\n\n", inputTemp, convertedTemp);
                break;

            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &inputTemp);
                convertedTemp = fahrenheitToCelsius(inputTemp);
                printf("%.2f°F is equal to %.2f°C\n\n", inputTemp, convertedTemp);
                break;

            case 3:
                printf("Exiting the program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid option! Please choose between 1, 2, or 3.\n\n");
        }
    }

    return 0;
}

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to display the user menu
void displayMenu() {
    printf("=====Menu=====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Exit\n");
    printf("==============\n");
}

