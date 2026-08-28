// Q6. Write a program to demonstrate enumerated data types.
#include <stdio.h>
enum week
{
        Monday,
        Tuesday,
        Wednesday = 30,
        Thursday,
        Friday,
        Saturday,
        Sunday,
        
};
    int main(){
    enum week today;
    today = Wednesday;
    printf("value of wednesday = %d\n", today);
    return 0;
}