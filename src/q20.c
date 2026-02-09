// Write an expression that checks if a number is a multiple of either 3 or 5.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a%3==0 || a%5==0)
        printf("The number is a multiple of either one");
    else
        printf("The number is not a multiple of either one");
        return 0;
}