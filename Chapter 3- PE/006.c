/* Programming Exercise 3-6 */
#include <stdio.h>
int main(void)
{
	float water;
	float massofsingle = 3.0e-23;
    float quartz = 950;
    
	printf("What is the amount of water in quartz?\n");
	scanf("%f", &water);
	printf("The amount of water molecules in %f quartz of water is: %e!\n", water, water * quartz / massofsingle);

	return 0;
}
