/* Programming Exercise 3-4 */
#include <stdio.h>
int main(void)
{
    float f;
	  printf("Enter a floating-point value:"); 
    scanf("&f", &f);
	  printf("fixed-point notation: %f\n", f);
    printf("exponential notation: %e\n", f);
    printf("p notation: %a\n", f);
  return 0;
}
