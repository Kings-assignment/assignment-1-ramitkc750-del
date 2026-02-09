// Given a variable num, write an expression that checks if it is a power of 2.
// You can you math header file for this (eg: #include <math.h>)
#include <stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);
    if(a>0 && (a &(a-1) )==0)
        printf("The number is a power of 2:%d\n",a);
    else
        printf("The number is not a power of 2:%d\n",a);
        return 0;
}