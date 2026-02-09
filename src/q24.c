// Create an expression that checks if a given number is a perfect square.
// You can you math header file for this (eg: #include <math.h>)
#include <stdio.h>
#include<math.h>
int main(){
    int s,integer,i;
    printf("Enter the value of s:");
    scanf("%d",&s);
    integer=sqrt(s);
    if(integer*integer==s)
    
        printf("The number is a perfect square:%d\n",s);

    else
    printf("The number is not a perfect square:%d\n",s);
    return 0;

}