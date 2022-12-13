#include <stdio.h>

int main() 
{
    int i, j;

    long long int maxSum = 0, minSum = 0, temp;
    long long int arr[5];

    for (i = 0; i < 5; i++) {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (arr[i] < arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0, j = 4; i < 4; i++, j--) {
        maxSum = maxSum + arr[j];
        minSum = minSum + arr[i];
    }

    printf("%lld %lld", minSum, maxSum);

    return 0;
}