#include <stdio.h>
int main() 
{
    float l,b;
    printf("Enter length");
    scanf("%f", &l);
    printf("Enter breadth");
    scanf("%f", &b);
    printf("Area is %.2f\n", l * b);
    printf("Perimeter is %.2f\n", 2 * (l + b));
}
