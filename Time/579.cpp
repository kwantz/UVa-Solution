#include <bits/stdc++.h>

using namespace std;

double clockAngle(double hour, double minute) {
    if(hour == 12) hour = 0;
    if(minute == 60) minute = 0;

    double angleHour = 0.5 * (hour * 60 + minute);
    double angleMinute = 6 * minute;
    double angle = abs(angleHour - angleMinute);

    return min(angle, 360 - angle);
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string jam;
    while(cin >> jam && jam != "0:00") {
        double h=0, m=0;
        bool s = false;
        for(int i=0; i<jam.size(); i++) {
            if(jam[i] == ':') {
                s = true;
            } else {
                if( !s ) h = h * 10 + (jam[i] - '0');
                else m = m * 10 + (jam[i] - '0'); 
            }
        }
        cout << fixed << setprecision(3) << clockAngle(h, m) << endl;
    }
}