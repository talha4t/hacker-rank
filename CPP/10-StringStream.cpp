#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int i = 0;
    while(s[i] != 0) {
        if (s[i] == ',') {
            i++;
            cout << ed;
        }

        cout << s[i];
        i++;
    }

    return 0;
}