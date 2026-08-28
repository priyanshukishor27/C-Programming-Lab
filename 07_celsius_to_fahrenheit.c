// Q7. Write a program to compute Fahrenheit from Centigrade.
#include <stdio.h>

int main()
{
    float c;

    printf("Enter Celsius: ");
    scanf("%f", &c);

    printf("Temperature in Fahrenheit is %.1f\n", (c * 9 / 5) + 32);

    return 0;
}