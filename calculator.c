#include <stdio.h>
int main()
{
	printf("adding two numbers.\n");
	double  num1;
	double  num2;
	double answer = num1 + num2;
	printf("enter first  number:");
	scanf("%lf", &num1);
printf("enter second number:");
scanf("%lf", &num2);
printf("your answer is %1.3lf\n", num1 + num2);
return 0;
}
