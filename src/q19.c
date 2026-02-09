// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a, b and c:");
    scanf("%d%d%d", &a, &b, &c);
    if(a==b && b!=c)
    printf("Expression is true \n");
    else
    
    printf("Expression is false \n");
    return 0;
    
}