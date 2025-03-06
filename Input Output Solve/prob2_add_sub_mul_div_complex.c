#include <stdio.h>

int main()
{

    float a, b, sum, sub, mul, div;
    char operator = 'a';

    printf("Enter your first number: ");
    scanf("%f", &a);

    printf("Enter your second number: ");
    scanf("%f", &b);

    printf("What do want to do?\n");
    printf("For,\n summation type: +\n subtract type: -\n multiply type: *\n division type: /\n");
    printf("Select an operator: ");
    scanf(" %c", &operator);



    if( operator == '+'){
        printf("The summation of %.2f and %.2f is %.3f\n", a, b, a + b);

    }
    if( operator == '-'){
        printf("The subtraction of %.2f and %.2f is %.3f\n", a, b, a - b);
    }
    if( operator == '*'){
        printf("The multiplication of %.2f and %.2f is %.3f\n", a, b, a * b);
    }
    else if(operator == '/'){
        if(b != 0)
            printf("The division of %.2f and %.2f is %.3f\n", a, b, a / b);
        else
            printf("Error! Division by zero is not allowed.\n");
    }

    return 0;
}
