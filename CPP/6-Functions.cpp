#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int highestNumber(int a, int b, int c, int d)
{
    
    if (a > b && a > c && a > d) 
        return a;
    if (b > a && b > c && b > d)
        return b;
    if (c > a && c > b && c > d)
        return c;
    else
        return d;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int sum = highestNumber(a, b, c, d);

    cout << sum << ed;

    return 0;
}