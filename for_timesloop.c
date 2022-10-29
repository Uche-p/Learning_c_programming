/* using what i have learnt in the for loop, let me try an addition <F11> problem*/
#include <stdio.h>
int main()
{
	int x, y;
	for (x=3, y=3; x<50; x++, y++){
		printf("%d + %d = %d\n", x, y, x + y);
	}
	return 0;
}
/* seems i got what i am looking for, but i cannot seem to figure out how to print a number instead of ok(issue rectified!!!! i forgot to add z at the printf)*/
/* turns out this code is wrong 
 * int x = 3;                                                 int y = 3;                                                 int z = x + y;                                             for (z=x+y; z<10; y++){                                            printf("%d\n",z);                                  }                                                          return 0;*/

