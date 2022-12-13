#include <stdio.h>

int  compare(int a[], int b[])
{
    int i, a_count = 0, b_count = 0;

    for (i = 0; i < 3; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            a_count++;
        }
        else if (b[i] > a[i]) {
            b_count++;
        }
    }
    
    printf("%d %d", a_count, b_count);

    return 0;
}

int main()
{

    int a[3], b[3];

    compare(a, b);

    return 0;

}