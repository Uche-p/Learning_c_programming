// a program to calculate dozens of egg gotten in a day

#include <stdio.h>
int main()
{
	printf("total number of eggs per day:\n");
	int eggs;
	scanf("%d", &eggs);
	double dozen = (double)  eggs / 12 ;
	printf("you have %f dozen eggs per day. \n", dozen);
	return 0;
}
