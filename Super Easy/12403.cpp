#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int n, x, uang = 0;

    cin >> n;
    while(n--) {
        string a;
        cin >> a;

        if(a == "donate") { cin >> x; uang += x; }
        else cout << uang << endl;
    }
}