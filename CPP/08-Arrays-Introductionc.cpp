#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        v.push_back(x);
    }
    for (int i = n - 1; i >=    0; i--) 
        cout << v[i] << " ";

    return 0;
}