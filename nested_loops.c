#include <stdio.h>
int main()
{
	int i, j;
	for(i=1; i<=3; i++){
		printf("the start of part %d of the outer loop.\n", i);
		for(j=1; j<=4; j++)
			printf("part %d of the inner loop.\n", j);
		printf("the end of part%d of the outer loop.\n", i);
	}
	return 0;
}
