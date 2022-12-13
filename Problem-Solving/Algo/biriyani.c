#include <stdio.h>

int main()
{
    int t, a, b, sum;
    
    scanf("%d", &t);

    while(t--) {
        sum = 0;
        scanf("%d %d", &a, &b);

        sum = a * b; 
        
        printf("%d\n", sum);

    }
}