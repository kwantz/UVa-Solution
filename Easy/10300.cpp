#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int t, step = 0;
    while(cin >> t) {
        for(int i=0; i<t; i++) {
            int n;
            lli hasil = 0;

            cin >> n;
            for(int j=0; j<n; j++) {
                lli a, b, c;
                cin >> a >> b >> c;
                hasil += (a*c);
            }
            cout << hasil << endl;
            step++;
        }
    }
}