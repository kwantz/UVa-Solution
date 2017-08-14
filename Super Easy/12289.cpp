#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int n;

    cin >> n;
    while(n--) {
        string a;
        int satu = 0, dua = 0;

        cin >> a;

        if(a[0] == 'o') satu++;
        if(a[1] == 'n') satu++;
        if(a[2] == 'e') satu++;

        if(a[0] == 't') dua++;
        if(a[1] == 'w') dua++;
        if(a[2] == 'o') dua++;
        
        if(satu >= 2) cout << "1" << endl;
        if(dua >= 2) cout << "2" << endl;
        if(a.size() == 5) cout << "3" << endl;
    }
}