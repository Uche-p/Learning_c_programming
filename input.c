// practicing user input
#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	int result;
	printf("enter first name:/n");
	scanf("%d", &x);
	printf("enter second number:/n");
	scanf("%d", &y);
	result = x + y;
	printf("sum of 2 numbers: %d", x+y);
	return 0;
}


