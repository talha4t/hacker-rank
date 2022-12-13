#include <stdio.h>
 
int main() 
{
    int tt, i,ca;
    char b[1e9 + 1];
    
 
    scanf("%d", &tt);
 
    while(tt--) 
    {
        sum = 0;
        
        scanf("%d %s", &a, b);
 
        for (i = a; i <= b[i] != '\0'; i++)
        {
            sum = sum + i;
        }
 
        printf("%lld\n", sum);
    }
}