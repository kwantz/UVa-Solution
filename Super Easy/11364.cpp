#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int t, n, mini, maxi, a;
    cin >> t;

    while(t--) {
        cin >> n;
        mini = 100;
        maxi = 0;

        for(int i=0; i<n; i++) {
            cin >> a;
            mini = min(mini, a);
            maxi = max(maxi, a);
        } cout << (maxi - mini) * 2 << endl;
    }
}