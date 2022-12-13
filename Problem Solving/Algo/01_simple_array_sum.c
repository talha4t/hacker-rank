#include <stdio.h>

int array_sum(int n, int arr[]) {
    int i, sum = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int n, arr_sum;

    scanf("%d", &n);
    
    int arr[n];

    arr_sum = array_sum(n, arr);

    printf("%d", arr_sum);

    return 0;

}