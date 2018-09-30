/* Programming Exercise 2-3 */
#include <stdio.h>
int main(void)
{
 int year; /* age in years */
 int days; /* age in days */
 printf("Please input your age in years. \n");
 scanf("%d", &year);
 days = 365 * year;
 printf("An age of %d years is %d days.\n", year, days);
 return 0;
 }
 
