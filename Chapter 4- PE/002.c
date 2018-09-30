/* Programming Exercise 4-1 */
#include <stdio.h>
int main(void)
{
 char fname[40];
 int name_length
 printf("Enter your first name: ");
 scanf("%s", fname);
  printf("\"%s\"\n", fname); // a. enclosed in double quotes
	printf("\"%20s\"\n", fname); // b. double quotes, 20 char wide, right-justified
	printf("\"%-20s\"\n", name); // c. double quotes, 20 char wide, left-justified
	printf("\"%*s\"\n", name_length + 3, name); // d. double quotes, 3 char wider than name

 return 0;
}
