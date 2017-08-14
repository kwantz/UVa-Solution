#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int n;

    cin >> n;
    for(int t=0; t<n; t++) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << "Case " << t+1 << ": ";
        if(a>20 || b>20 || c>20) cout << "bad" << endl;
        else cout << "good" << endl;
    }
}