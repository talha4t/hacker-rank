#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string a, b;
    cin >> a >> b;

    cout << a.length() << ' ' <<  b.length() << ed;

    cout << a + b << ed;

    swap(a[0], b[0]);
    cout << a << ' ' << b << ed;



    return 0;
}