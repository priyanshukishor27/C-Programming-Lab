// Q8. Write a program to calculate simple interest.
#include <stdio.h>

int main()
{
    float p, r, t;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time Period: ");
    scanf("%f", &t);

    printf("Simple Interest is: %.2f\n", (p * r * t) / 100);

    return 0;
}