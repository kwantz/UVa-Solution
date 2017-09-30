#include <bits/stdc++.h>

using namespace std;

string arah(string a, string b) {
    if(a == "+z") {
        if(b == "+z") return "-x";
        if(b == "-z") return "+x";
        return "+z";
    }

    if(a == "-z") {
        if(b == "+z") return "+x";
        if(b == "-z") return "-x";
        return "-z";
    }

    if(a == "+y") {
        if(b == "+y") return "-x";
        if(b == "-y") return "+x";
        return "+y";
    }

    if(a == "-y") {
        if(b == "+y") return "+x";
        if(b == "-y") return "-x";
        return "-y";
    }
    if(a == "-x") {
        if(b == "+y") return "-y";
        if(b == "-y") return "+y";
        if(b == "+z") return "-z";
        if(b == "-z") return "+z";
    }

    if(b == "No") return a;
    return b;
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    while(cin >> n && n != 0) {
        string a, z = "+x";
        for(int i=1; i<n; i++) {
            cin >> a;
            z = arah(z, a);
        }
        cout << z << endl;
    }
}