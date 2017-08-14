#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int n, l;

    cin >> n;
    while(n--) {
        string a;
        cin >> a;

        l = a.size();
        if(a == "1" || a == "4" || a == "78")                       cout << "+" << endl;
        else if(l > 2 && a[l-2] == '3' && a[l-1] == '5')            cout << "-" << endl;
        else if(l > 2 && a[0] == '9' && a[l-1] == '4')              cout << "*" << endl;
        else if(l > 3 && a[0] == '1' && a[1] == '9' && a[2] == '0') cout << "?" << endl;
    }
}