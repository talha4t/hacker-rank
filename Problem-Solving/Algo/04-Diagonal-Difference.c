#include <stdio.h>

int main()
{
    int n, i, j, sum1 = 0, sum2 = 0, difference;


    scanf("%d", &n);
    
    int a[n][n];
 
    // read data from the user
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    // adding diagonally n >= 0
    for (i = 0, j = n - 1; i < n; i++, j--) {
        sum1 = sum1 + a[i][i];
        sum2 = sum2 + a[i][j];
    }


    if (sum1 > sum2) {
        difference = sum1 - sum2;
    }
    else {
        difference = sum2 - sum1;
    }


    printf("%d", difference);

    return 0;
    
}