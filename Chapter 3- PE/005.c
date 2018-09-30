/* Programming Exercise 3-5 */
#include <stdio.h>
int main(void)
{
	unsigned int agesec = 31560000;
	unsigned int age;
	printf("What is your age (in years)?: ");
	scanf("%u", &age);
	printf("Your age in seconds is: %u!\n", agesec * age);

	return 0;
}
