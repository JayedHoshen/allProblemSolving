#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, r;
    char sy, q;
    cin >> a >> sy >> b >> q >> c;

    if(sy == '+') {
        if(a+b == c) cout << "Yes\n";
        else cout << (a+b) << endl;
    }     
    else if(sy == '-') {
        if(a-b == c) cout << "Yes\n";
        else cout << (a-b) << endl;
    } 
    else if(sy == '*') {
        if(a*b == c) cout << "Yes\n";
        else cout << (a*b) << endl;
    }

    return 0;
}