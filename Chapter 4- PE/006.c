int main(void)
{
	char first_name[20];
	char last_name[20];

	printf("Enter your first and last name: ");
	scanf("%s %s", first_name, last_name);
	printf("\n");
	printf("%s %s\n", first_name, last_name);
	printf("%*lu %*lu\n", // right justified
		   (int) strlen(first_name), strlen(first_name),
		   (int) strlen(last_name), strlen(last_name));
	printf("\n");
	printf("%s %s\n", first_name, last_name);
	printf("%-*lu %-*lu\n", // left justified
		   (int) strlen(first_name), strlen(first_name),
		   (int) strlen(last_name), strlen(last_name));
	printf("\n");

	return 0;
}
