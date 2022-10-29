#include <stdio.h>
int main()
{
	int c = 28;
	printf("Enter a number:\n (enter 0 to end)\n");
	scanf("%d\n", &c);
	while (c == 0){
		scanf("%d\n", &c);
		putchar(c);
	}
	printf("\n the end\n");
	return 0;
}

