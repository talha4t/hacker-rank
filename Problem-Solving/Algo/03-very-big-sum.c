#include <stdio.h>

long long int  big_sum(int n, long long int ar[]) {
    int i;
    long long int sum = 0;

    for (i = 0; i < n; i++) {
        scanf("%lld", &ar[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + ar[i];
    }

    return sum;
}
int main(){
    
    int n;

    scanf("%d", &n);

    long long int ar[n];
    
    long long int s = big_sum(n, ar);

    printf("%lld", s);

    return 0;
}