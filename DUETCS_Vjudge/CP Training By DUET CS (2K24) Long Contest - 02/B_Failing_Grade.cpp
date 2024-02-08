#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, a, fail = 0;

    cin >> n >> p;

    while(n--) {
        cin >> a;
        fail += (a<p);
    }
    cout << fail << "\n";

    return 0;
}