#include <stdio.h>
int main() 
{
    float r,a;
    printf("Enter radius");
    scanf("%f", &r);
    a = r * r * 22.0 / 7.0;
    printf("Area: %f\n",a);
}
