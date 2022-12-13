#include <stdio.h>

int main()
{
    int t, a, b, sum1, sum2;
    
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);

        sum1 = 7 - a;
        sum2 = 7 - b;

        if (sum1 > sum2) {
            printf("%d\n", sum2);
        }
        else {
            printf("%d\n", sum1);
        }
    }
    return 0;
}