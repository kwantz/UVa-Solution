#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int t;
    while(cin >> t) {
        if(t==0) return 0;

        int a, b;
        cin >> a >> b;
        for(int i=0; i<t; i++) {
            int x, y;
            cin >> x >> y;
            
            if     (a==x || b==y) cout << "divisa" << endl;
            else if(a<x && b<y) cout << "NE" << endl;
            else if(a<x && b>y) cout << "SE" << endl;
            else if(a>x && b>y) cout << "SO" << endl;
            else if(a>x && b<y) cout << "NO" << endl;
        }
    }
}