
// Q2. Write a program that reads two numbers from the keyboard and performs
// addition, subtraction, multiplication, division and modulo operations.

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulo = %d\n", a % b);

    return 0;
}