#include <stdio.h>
int main() 
{
    int m1, m2, m3, t;
    printf("Enter marks of subject 1 ");
    scanf("%d", &m1);
    printf("Enter marks of subject 2");
    scanf("%d", &m2);
    printf("Enter marks of subject 3");
    scanf("%d", &m3);
    t = m1 + m2 + m3;
    float avg = t / 3.0;
    printf("Total is %d\n", t);
    printf("Average  is %.2f\n", avg);
}
