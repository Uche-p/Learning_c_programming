#include <stdio.h>
int main()
{
	double i = 5.6;
	int x = 3;
	int result = (int) i + x;
	printf("%d\n", result);
	return 0;
/* seems i can use this in a situation where i have both double and int values, but i want the output to be an int value*/
}
