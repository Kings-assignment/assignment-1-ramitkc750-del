// Create an expression that swaps the values of three variables x, y, and z in a cyclic order (i.e., x becomes y, y becomes z, and z becomes x).
#include<stdio.h>
int main(){
    int x,y,z,temp;
    printf("Enter the value of x, y and z:");
    scanf("%d%d%d", &x, &y, &z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("After swapping, the value of x is: %d\n", x);
    printf("After swapping, the value of y is: %d\n", y);
    printf("After swapping, the value of z is: %d\n", z);
    return 0;
}