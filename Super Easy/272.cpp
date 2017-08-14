#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    string a;
    bool status = true;

    while(getline(cin, a)) {
        for(int i=0; i<a.size(); i++) {
            if( a[i]=='\"' && status ) { cout << "``"; status = false; }
            else if( a[i]=='\"' && !status ) { cout << "''"; status = true; }
            else cout << a[i];
        }
        cout << endl;
    }
}