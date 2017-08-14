#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    string a;
    int b = 1;
    while(cin >> a) {
        if(a == "*") return 0;

        cout << "Case " << b++ << ": ";
        if(a == "Hajj") cout << "Hajj-e-Akbar" << endl;
        else cout << "Hajj-e-Asghar" << endl;
    }
}