#include <stdio.h>

int main() 
{
    printf("The first 10 even numbers are:\n");
     int i;
    for (i = 1; i <= 10; i++) 
	{
        printf("%d\n", 2 * i);
    }

    return 0;
}
