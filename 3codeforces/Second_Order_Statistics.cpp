#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    set <int> s;
    while(tc--) {
        int x;
        cin >> x;
        s.insert(x);
    }
    auto it = s.begin();
    it++;

    if(it != s.end()) cout << *it << endl;
    else cout << "NO" << endl;

    return 0;
}