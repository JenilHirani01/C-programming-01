#include <stdio.h>
int main() 
{
float bytes, kb, mb, gb;
printf("Enter the size in bytes");
scanf("%f", &bytes);
kb = bytes / 1024;
mb = kb / 1024;
gb = mb / 1024;
printf("\nSize in KB %.2f", kb);
printf("\nSize in MB %.2f", mb);
printf("\nSize in GB %.2f\n", gb);
}
