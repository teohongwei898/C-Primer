/* Programming Exercise 3-2 */
#include <stdio.h>
int main(void)
{
 int ascii;

 printf("Enter an ASCII code: ");
 scanf("%d", &ascii);
 printf("%d is the ASCII code for %c.\n", ascii, ascii);
 return 0;
}
