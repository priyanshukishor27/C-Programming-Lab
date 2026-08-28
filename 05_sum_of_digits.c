
// Q5. Write a program to calculate the sum of the digits of a three-digit number.

#include <stdio.h>

int main(){
    int n;

    printf("Enter the no: ");
    scanf("%d", &n);

    printf("Addition of no is: %d\n", n/100 + (n/10)%10 + n%10);

    return 0;
}