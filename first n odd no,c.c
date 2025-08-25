#include <stdio.h>
int main() 
{
    int n;
    int i; 

    printf("Enter the number of odd natural numbers to print: ");
    scanf("%d", &n);

    printf("The first %d odd natural numbers are:\n", n);
    for (i = 1; i <= n; i++) 
	{
        printf("%d ", (2 * i) - 1);
    }

    printf("\n");
    return 0;
}
