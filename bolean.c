#include <stdio.h>
#include <stdbool.h>
int main()
{
	int age = 18;
	printf("enter age:");
	scanf("%d\n", &age);
	bool result = (age < 18);
	printf("You are %d years old, please Ask an adult for permission \n", age);
	return 0;
	
}
