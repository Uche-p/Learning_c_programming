#include <stdio.h>
        int main()
{
        int c;
        c = ' ';
        printf("enter a character:\n (type x to exit)\n");
        while (c=='x'){
                c = getc(stdin);
                putchar(c);
        }
        printf("\n the end\n");
        return 0;
}

