#include <bits/stdc++.h>

using namespace std;
 
#define lli long long int

int main()
{
    int t;
    cin >> t;

    for(int x = 1; x<=t; x++) {
		vector<int> myVec;

		for(int i=0; i<3; i++) { 
			int a;
			cin >> a;
			myVec.push_back(a);
		}	sort(myVec.begin(), myVec.end());

		cout << "Case " << x << ": " << myVec[1] << endl;
    }
}