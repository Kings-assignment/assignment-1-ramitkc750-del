// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a, b and c:");
    scanf("%d,%d,%d", &a, &b, &c);
    if(a>b && c!=0)
    printf("The expression is true \n");
    else
    printf("The expression is false \n");
    return 0;
}