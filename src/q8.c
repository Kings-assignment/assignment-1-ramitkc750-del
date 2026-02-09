/* Write a C program to convert temperature from Celsius to Fahrenheit. Prompt the user for a
temperature in Celsius and display the equivalent temperature in Fahrenheit.
(Formula: fahrenheit = (celsius * 9 / 5) + 32) */
#include <stdio.h>
int main()
   { int c, f;
    printf("Enter the value of temeprateure in celcius:");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("The value of temeprature in Farahenheit is: %d\n", f);
    return 0;
}