// Write a C program to swap the values of two variables using a temporary variable.
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping, the value of a is: %d\n", a);
    printf("After swapping, the value of b is: %d\n", b);
    
    return 0;
}