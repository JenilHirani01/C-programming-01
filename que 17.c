#include <stdio.h>
int main() 
{
    int n, pos=0, neg=0, zero=0;
    for(int i=1; i<=200; i=i+1) {
        printf("Enter number %d:", i);
        scanf("%d", &n);
        if(n > 0) {
          pos=pos+1};
        else if(n < 0) {
          neg=neg+1};
        else {
          zero=zero+1};
    }
    printf("Positive = %d, Negative = %d, Zero = %d", pos, neg, zero);
    return 0;
}
