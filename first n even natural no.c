#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter the number of even natural numbers to print: ");
    scanf("%d", &n);

    printf("The first %d even natural numbers are:\n", n);

    for (i = 1; i <= n; i++) 
	{
        printf("%d ", 2 * i);
    }

    printf("\n");
    return 0;
}
