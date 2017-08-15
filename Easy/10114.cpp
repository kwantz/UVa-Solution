#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

double getBunga(double x, double persen) {
    return x - (x * persen);
}

int main()
{
    int a, n, x, stp;
    double b, c, hasil, tp, uang, tmp;

    while(cin >> a >> b >> c >> n) {
        if(a < 0) return 0;

        stp = 0;
        hasil = b+c;
        uang = c;
        tmp = 0;

        for(int i=0; i<n; i++) {
            cin >> x >> tp;

            if(x == 0) { hasil = getBunga(hasil, tp); }
            else {
                while(stp < x && hasil < uang) {
                    if(stp != 0) {
                        hasil = getBunga(hasil, tmp);
                        uang -= (c / (double)a);
                    }
                    if(hasil < uang) stp++;
                }
            }

            tmp = tp;
        }
        
        while(hasil < uang) {
            if(stp != 0) {
                hasil = getBunga(hasil, tmp);
                uang -= (c / (double)a);
            }
            if(hasil < uang) stp++;
        }

        cout << stp;
        if(stp == 1) cout << " month" << endl;
        else cout << " months" << endl;
    }
}