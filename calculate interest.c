#include <stdio.h>

int main()
{
float p, r, n, i;
printf("Enter principal amount");
scanf("%f", &p);
printf("Enter rate of interest");
scanf("%f", &r);
printf("Enter time in years");
scanf("%f", &n);
i = (p * r * n) / 100;
printf("Simple Interest= %.2f\n", i);
}
