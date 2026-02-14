// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include <stdio.h>
#include <conio.h>
int main(){
    int days, weeks, remaining_days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    weeks = days / 7; // Calculate the number of weeks
    remaining_days = days % 7; // Calculate the remaining days
    
    printf("%d week(s) and %d day(s)\n", weeks, remaining_days);
return 0;
}