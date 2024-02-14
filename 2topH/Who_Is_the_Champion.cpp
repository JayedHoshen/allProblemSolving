#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	
	if(a>b) cout << "Champion\n";
	else cout << "Runner up\n";
	
	if(b>a) cout << "Champion\n";
	else cout << "Runner up\n";
	
	return 0;
}