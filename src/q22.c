// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)
#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    c = sqrt(a+b);
    printf("the square root of the sum is: %d\n", c);
    return 0;

}