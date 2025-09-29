#include<stdio.h>
int main()
{
    int a[5],*p,i;
    p=a;
    printf("\nEnter 5 different values.\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",p);
        p++;
    }
    printf("now putting all values of array a\n");
    printf("using pointer variable p.\n");
    p=a;
      for(i=0;i<5;i++)
    {
        printf("%d ",*p);
        p++;
    }
    return 0;


}
