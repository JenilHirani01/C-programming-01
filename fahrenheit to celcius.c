#include <stdio.h>
int main()
{
float c,f;
printf("Enter temperature in farenheit\n");
scanf("%f", &f);
c= (f-32)*5/9;
printf("Temperature in celcius is %.2f\n",c);
}
