#include <stdio.h>
int main()
{
	printf("total number of eggs per day:\n");
	double eggs;
		scanf("%lf", &eggs);
	double dozen = eggs / 12 ;
	printf("you have %1.3lf dozen eggs.\n", dozen);
	return 0;
}
