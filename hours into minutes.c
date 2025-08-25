#include <stdio.h>
void main()
{
	int hours;

	printf("Please enter hours:");
	scanf("%d", &hours);

	int minutes = hours * 60;

	printf("%d Minutes", minutes);
}
