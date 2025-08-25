#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Prompt the user to enter the number of even natural numbers
    printf("Enter the number of even natural numbers (n): ");
    scanf("%d", &n);

    // Calculate the sum of the first 'n' even natural numbers using a for loop
    for (i = 1; i <= n; i++) {
        sum += (2 * i); // Add the i-th even number (2*i) to the sum
    }

    // Print the calculated sum
    printf("The sum of the first %d even natural numbers is: %d\n", n, sum);

    return 0;
}
