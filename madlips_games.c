#include <stdio.h>
int main ()
{

printf("What type of fruit are you?\n\n");
	char name[100];
	char food[100];
	char month[100];
	char color[50];

	printf("what is your name?");
		scanf("%s", name);

printf("what is your favorite food?");
                scanf("%s", food);
		printf("what is month were you born?");
                scanf("%s", month);
		printf("what is your favorite color?");
                scanf("%s", color);
		printf("you are %s", color);
		printf(" %s\n", food);
		return 0;
}


