#include <stdio.h>
int main() 
{
    int n, i, sum = 0;

    printf("Enter the number of odd natural numbers (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("The sum of the first %d odd natural numbers is: %d\n", n, sum);

    return 0;
}
