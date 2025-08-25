#include <stdio.h>
int main() 
{
    int n; 
    int i; 
    printf("Enter the number of natural numbers to print: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);

    
    for (i = 1; i <= n; i++) 
	{
    
        printf("%d ", i);
    }

    printf("\n");

    return 0; 
}
