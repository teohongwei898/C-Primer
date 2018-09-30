/* Programming Exercise 3-7 */
#include <stdio.h>
int main(void)
{
	float heightinch;
	float conv = 2.54;
    
	printf("What is your height in inches?\n");
	scanf("%f", &heightinch);
	printf("You are %f cm tall!\n", heightinch * conv);

	return 0;
}
