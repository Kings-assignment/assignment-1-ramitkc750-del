// Create an expression that swaps the values of two variables x and y without using a temporary variable.
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of x and y:");
    scanf("%d%d", &x, &y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping, value of x is: %d\n", x);
    printf("After swapping, value of y is: %d\n", y);
    return 0;
}