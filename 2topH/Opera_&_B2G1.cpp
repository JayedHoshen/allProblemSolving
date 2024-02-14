#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, x, r, s, tc;
	cin >> tc;
	while(tc--){
		cin >> m >> x;
	    r = m / x;
	    s = r / 2;
	    cout << r+s << endl;
	}
	
	return 0;
}