#include <stdio.h>
int main()
{
	double radius;
	printf("enter a number:");
	scanf("%lf", &radius);
	double area = 3.14159 * (radius * radius);
	printf("the area of a circle with %lf radius is %lf", radius, area);
	return 0;
}

