// Q9. Write a program to separate an amount into rupees and paise.
#include <stdio.h>

int main()
{
    float amount;
    int rupee;
    int paisa;

    printf("Enter amount: ");
    scanf("%f", &amount);

    rupee = (int)amount;
    paisa = (amount - rupee)*100 + 0.5;

    printf("Amount in Rupee is %d\n", rupee);
    printf("Amount in Paisa is %d\n", paisa);

    return 0;
}