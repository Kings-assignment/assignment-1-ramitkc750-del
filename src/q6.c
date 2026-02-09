// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.
#include <stdio.h>

int main() {

    int l,b,a;

    printf("Enter the Length of the rectangle: ");
    scanf("%d", &l);

    printf("Enter the Width of the rectangle: ");
    scanf("%d", &b);

    a = l*b;

    printf("The area of the rectangle is: %d\n", a);

    return 0;
}