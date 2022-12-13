#include <stdio.h>

void gradingStudents(int n)
{
    int arr[n], arr1[n], i, t;

    for (i = 0; i < n; i++) {
        scanf("%d\n", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        t = arr[i] / 5;
        arr1[i] = t * 5;
        if (arr1[i] < arr[i]) {
            arr1[i] = arr1[i] + 5;
        }
    }

    for (i = 0; i < n; i++) {
        if ((arr1[i] - arr[i]) < 3 && arr[i] >= 38) {
            printf("%d\n", arr1[i]);
        }
        else {
            printf("%d\n", arr[i]);
        }
    }
}
int main()
{
    int n;

    scanf("%d", &n);

    gradingStudents(n);
    
    return 0;
}