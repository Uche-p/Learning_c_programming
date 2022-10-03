#include <stdio.h>
int main()
{
int x = 1;
int y = 3;
int z = 10;
printf ("given x = %d, y = %d, z = %d\n", x, y, z);

x = x + y;
printf("x = x + y assigns %d to x\n", x);

x += y;
printf("x += y; assigns %d to x\n", x);
}


