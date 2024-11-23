#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tc;
    cin >> tc;

    map <string, int> mp;

    while(tc--) {
        string name;
        cin >> name;

        if(mp[name] == 0) cout << "OK" << endl;
        else cout << name << mp[name] << endl;

        mp[name]++;
    }

    return 0;
}