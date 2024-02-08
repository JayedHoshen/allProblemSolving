#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, r, t;       
    cin >> a >> b;
    r = a;
    while(a >= b) {
        if(a%b == 0) {
            a /= b;
            r += a;
        }
        else {
            t = a;
            a /= b;
            r += a;
            a += (t%b);
        }        
    }
    cout << r << "\n";

    return 0;
}