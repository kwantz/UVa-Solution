#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    map<string,string> lang;
    lang["HELLO"]        = "ENGLISH";
    lang["HOLA"]         = "SPANISH";
    lang["HALLO"]        = "GERMAN";
    lang["BONJOUR"]      = "FRENCH";
    lang["CIAO"]         = "ITALIAN";
    lang["ZDRAVSTVUJTE"] = "RUSSIAN";

    string n;
    int i = 1;
    while(cin >> n) {
        if(n == "#") return 0;

        cout << "Case " << i++ << ": ";
        if(lang[n] == "") cout << "UNKNOWN" << endl;
        else cout << lang[n] << endl;
    }
}