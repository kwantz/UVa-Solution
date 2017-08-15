#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

double getBunga(double x, double persen) {
    return x - (x * persen);
}

int main()
{
    int a, n, bln, step;
    double b, c, tp, tmp, hasil, uang;

    while(cin >> a >> b >> c >> n) {
        if(a < 0) return 0;

        step = tmp = 0;
        hasil = b+c;
        uang = c;

        for(int i=0; i<n; i++) {
            cin >> bln >> tp;

            if(bln == 0) hasil = getBunga(hasil, tp);
            while(step < bln && hasil < uang) {
                if(step != 0) {
                    hasil = getBunga(hasil, tmp);
                    uang -= (c / (double)a);
                } if(hasil < uang) step++;
            }
            tmp = tp;
        }
        
        while(hasil < uang) {
            if(step != 0) {
                hasil = getBunga(hasil, tmp);
                uang -= (c / (double)a);
            } if(hasil < uang) step++;
        }

        string namaBln = (step == 1) ? " month" : " months";
        cout << step << namaBln << endl;
    }
}