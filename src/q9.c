// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include <stdio.h>
#include <conio.h>
int main(){

int d,w,rem;
printf("Enter the number of days: ");
scanf("%d",&d);
w=d/7;
rem=d%7;
printf("The equivalent number of weeks and days is: %d week(s) and %d day(s)\n", w, rem);
return 0;
}