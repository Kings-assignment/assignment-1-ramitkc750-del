#include <stdio.h>
#include<math.h>
int main(){
    int num = 16; 
    int sqrt_num = (int)sqrt(num);
    if(sqrt_num * sqrt_num == num)
        printf("The number is a perfect square: %d\n", num);
    else
        printf("The number is not a perfect square: %d\n", num);
    return 0;

}