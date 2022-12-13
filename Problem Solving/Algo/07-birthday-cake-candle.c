#include <stdio.h>

int main()
{
    int n, i, j, tmp, count = 0;

    scanf("%d", &n);

    long long int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (arr[n-1] == arr[i]) {
            count++;
        }
    }

    printf("%d\n", count);
    
    return 0;
}