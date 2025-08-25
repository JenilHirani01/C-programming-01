#include <stdio.h>
int main()
{
    float gs,d;
    printf("Enter gross sales");
    scanf("%f", &gs);
    d= gs * 0.10;
    printf("Net sales is %f\n", gs - d);
}
