#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int n, x = 1;

    while(cin >> n) {
        if(n == 0) return 0;

        int a, b;
        a = b = 0;

        for(int i=0; i<n; i++) {
            int c;
            cin >> c;
            
            if(c == 0) b++;
            else a++;
        }
        cout << "Case " << x++ << ": " << a - b << endl;
    }
}