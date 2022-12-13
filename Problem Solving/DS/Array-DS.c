#include <stdio.h>

void reverse_array(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

}
int main()
{
    int n;

    scanf("%d", &n);
    
    int a[n];

    reverse_array(a, n);

    return 0;
}