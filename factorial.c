#include <stdio.h>
int main() {
    int num, i;
    long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else if (num == 0) {
        printf("Factorial of 0 is 1.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i; 
        }
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}
