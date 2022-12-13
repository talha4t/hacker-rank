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
    
    cin >> n;

    if (n == 1)
        cout << "one" << ed;
    else if (n == 2) 
        cout << "two" << ed;
    else if (n == 3) 
        cout << "three" << ed;
    else if (n == 4) 
        cout << "four" << ed;
    else if (n == 5) 
        cout << "five" << ed;
    else if (n == 6) 
        cout << "six" << ed;
    else if (n == 7) 
        cout << "seven" << ed;
    else if (n == 8) 
        cout << "eight" << ed;
    else if (n == 9) 
        cout << "nine" << ed;
    else 
        cout << "Greater than 9" << ed;

    return 0;
}