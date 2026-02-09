// Create an expression that calculates the sum of squares of three numbers a, b, and c.
#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter the value of a, b and c:");
    scanf("%d%d%d", &a, &b, &c);
    sum=a*a+b*b+c*c;
    printf("The sum of squares is: %d\n", sum);
    return 0;
}