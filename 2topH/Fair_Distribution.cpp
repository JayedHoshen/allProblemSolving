#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, x, y, c;
    cin >> x >> y;
    c = y;

    for(i = 1; i <= x; i++) {
        if(c%x != 0) c++;
    }
    cout << (c-y) << endl;

    return 0;
}