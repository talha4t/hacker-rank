#include <stdio.h>

int main()
{
    int n, i, zero = 0, plus = 0, minus = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            plus++;
        }
        if (arr[i] < 0) {
            minus++;
        }
        if (arr[i] == 0) {
            zero++;
        }
    }

    printf("%.6lf\n", (double)plus / n);
    printf("%.6lf\n", (double)minus / n);
    printf("%.6lf\n", (double)zero / n);

    return 0;
}