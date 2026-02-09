// Write a C expression that performs the following operations in a single line: increment a variable by 1, multiply it by 3, and subtract 10.
#include <stdio.h>
int main()
{
    int a,x;
    printf ("enter the value of a :");
    scanf("%d",&a);
    x=((a+1)*3)-10;
    printf("the value of x is %d",x);
    return 0;
}