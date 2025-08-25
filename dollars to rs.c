#include <stdio.h>
void main()
{
	int dollars;

	printf("Please enter dollars:");
	scanf("%d", &dollars);

	int rs = dollars * 48;

	printf("%d rs", rs);
}
