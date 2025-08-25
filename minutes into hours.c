#include <stdio.h>
void main()
{
	float minutes;

	printf("Please enter minutes:");
	scanf("%f", &minutes);

	float hours = minutes / 60;

	printf("%f hours", hours);
}
