#include<stdio.h>
int main()
{
  int n1=5, n2=10;
  char choice;
  printf("Enter two number \n");
  scanf( "%d %d", &n1 , &n2);
  do
  {
    printf("=== Menu ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");
    printf("Enter your choice:");
    scanf("%c",&choice);
    switch (choice)
    {
    case '+': printf("The addition = %d \n", n1 + n2);
            break;
    case '-': printf("The subtraction = %d \n", n1 - n2);
            break;
    case '*': printf("The Multipication = %d \n", n1 * n2);
            break;
    case '/': printf ("The Division + %d \n",n1 / n2);
   	    break;
    case '%': printf("The Modulus = %d \n",n1 % n2);
    	    break;
    case 'e': printf("Goodbye\n");
            break;
    default:printf("Wrong Choice. Enter again\n");
            break;
  }
  } while (choice != 'e');
  return 0;
}

