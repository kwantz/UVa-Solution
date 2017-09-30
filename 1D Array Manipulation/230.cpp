#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    string buku;
    while(getline(cin, buku)) {
        if(buku == "END") break;

        string titel, pengarang;
        titel = pengarang = "";
        for(int i=0; i<buku.size(); i++) {
            titel += buku[i];
            if(i != 0 && buku[i] == "\"") break;
        }
    }
}