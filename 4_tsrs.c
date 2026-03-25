#include <stdio.h>

// Take Something, Return Something

int calculator(int a, int b, char operation)
{
    if(operation == '+')
    {
        printf("Addition = %d\n", a + b);
    }
    else if(operation == '-')
    {
        printf("Subtraction = %d\n", a - b);
    }
    else if(operation == '*')
    {
        printf("Multiplication = %d\n", a * b);
    }
    else if(operation == '/')
    {
            printf("Division = %.2f\n", (float)a / b);
        
     
    }
    else
    {
        printf("Invalid operator\n");
    }

    return 0;
}


int main()
{
    int x, y;
    char operation;

    printf("Enter frist numbers: ");
    scanf("%d", &x);

    printf("Enter second numbers: ");
    scanf("%d", &y);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &operation);  

    calculator(x, y, operation);

    return 0;
}