#include <stdio.h>

int main(void)
{
    int choice;
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Addition = %d\n", a + b);
        break;
    case 2:
        printf("Subtraction = %d\n", a - b);
        break;
    case 3:
        printf("Multiplication = %d\n", a * b);
        break;
    case 4:
        if (b == 0)
        {
            printf("Division by zero is not allowed.\n");
        }
        else
        {
            printf("Division = %d\n", a / b);
        }
        break;
    default:
        printf("Invalid number\n");
        break;
    }

    return 0;
}
