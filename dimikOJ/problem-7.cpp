#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	string s;	
    
	cin.ignore();

	while(t--) {
        getline(cin, s);
        int count = 0;

        for(int i = 0; i < s.size()-1; i++) {
            if(s[i] == ' ' && s[i+1] != ' ') {
                count++;
            }
        }
        cout << count+1 << endl;
    }

    return 0;
}