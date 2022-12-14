#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int a[100007];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin >> n >> d;

    for (int i = 0; i < n; i++)
        cin >> a[i];

     
    while(d--) {

        int first = a[0];

        for (int i = 0; i < n; i++) {
            a[i] = a[i + 1];
        }

        a[n - 1] = first;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;
}