#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

    if(N < 1582) {
        if(N%4 == 0) cout << "I can participate in LCPC\n";
	    else cout << "I have to travel back to the past\n";
    }
    else {
        if((N%400 == 0) || (N%4 == 0 && N%100 != 0))
        cout << "I can participate in LCPC\n";

	    else cout << "I have to travel back to the past\n";
    }

	return 0;
}