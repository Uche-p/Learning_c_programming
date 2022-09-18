
#include <stdio.h>
int main()
{
	int radius;
	printf("please enter a radius:");
scanf("%i", &radius);
double area = 3.14159 * (radius * radius);
printf("the area of circle with %i radius is %f", radius, area);
return 0;
}
