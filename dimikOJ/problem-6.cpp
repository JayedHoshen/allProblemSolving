#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        cout << "Sum = " << (n%10 + n/10000) << endl;
    }

    return 0;
}