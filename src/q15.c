// Write an expression that checks if a number is both positive and even.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a>0 && a%2==0)
    printf("The number is both positive and even \n");
    else
    printf("The number is not both positive and negative \n");
    return 0;
}