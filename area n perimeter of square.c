#include <stdio.h>
int main() 
{
    float a;
    printf("Enter side length of square");
    scanf("%f", &a);
    printf("Area is %f\n", a *a);
    printf("Perimeter is %f\n", 4 * a);
}
