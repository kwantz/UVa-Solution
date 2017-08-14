#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int getLock(int a, int b)
{ return (a <= b) ? (a + 40 - b) * 9 : (a - b) * 9; }

int main()
{
    int a, b, c, d;
    while(cin >> a >> b >> c >> d) {
        if(a==0 && b==0 && c==0 && d==0) return 0;
        int t = 1080;
        
        t += getLock(a, b) + getLock(c, b) + getLock(c,d);
        cout << t << endl;
    }
}