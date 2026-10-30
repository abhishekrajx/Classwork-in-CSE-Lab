#include <stdio.h>
#include <math.h>

// Function to calculate the distance in a 2D plane
void calculate2D() {
    float x1, y1, x2, y2, distance;
    
    printf("\nEnter coordinates for Point 1 (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter coordinates for Point 2 (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance in 2D plane: %.2f\n", distance);
}

// Function to calculate the distance in a 3D plane
void calculate3D() {
    float x1, y1, z1, x2, y2, z2, distance;
    
    printf("\nEnter coordinates for Point 1 (x1, y1, z1): ");
    scanf("%f %f %f", &x1, &y1, &z1);
    
    printf("Enter coordinates for Point 2 (x2, y2, z2): ");
    scanf("%f %f %f", &x2, &y2, &z2);
    
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("Distance in 3D plane: %.2f\n", distance);
}

int main() {
    int choice;
    
    while(1) {
        printf("\n=====Menu=====\n");
        printf("1. 2D plane\n");
        printf("2. 3D plane\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                calculate2D();
                break;
            case 2:
                calculate3D();
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }
    
    return 0;
}

