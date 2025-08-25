#include <stdio.h>
void main()
{
	int kilograms;

	printf("Please enter kilograms:");
	scanf("%d", &kilograms);

	int grams = kilograms * 1000;

	printf("%d grams",grams);
}
