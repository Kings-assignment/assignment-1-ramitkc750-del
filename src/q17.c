// Create an expression that checks if a given character is an uppercase letter.
#include <stdio.h>
int main(){
    char a;
    printf("Enter a character");
    scanf("%c", &a);
    if(a>='A' && a<='Z')
        printf("The character is an uppercase letter: %c\n", a);
    else
        printf("The character is a lowercaseletter: %c\n", a);
        return 0;
}