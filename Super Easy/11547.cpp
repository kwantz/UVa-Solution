#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int t;
    cin >> t;

    while(t--) {
        lli n;
        cin >> n;

        n = (n * 63 + 7492) * 5 - 498;
        n = n % 100 / 10;
        cout << abs(n) << endl;
    }
}