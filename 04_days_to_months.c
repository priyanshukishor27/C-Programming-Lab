// Q4. Write a program to convert a given number of days into months and days.
#include <stdio.h>

int main(){
    int n;
    
    printf("Enter No of days: ");
    scanf("%d", &n);

    printf("Number of Months is: %d\n", n / 30);
    printf("Remaining Days is: %d\n", n % 30);

    return 0;
}