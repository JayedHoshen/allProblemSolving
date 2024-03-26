#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, fl;
    cin >> n;

    if(n == (int) n) cout << "int " << n << endl;
    else {
         fl = n - (int)n;
        cout << "float " << (int) n << ' ' << fl << endl;
    }   

    return 0;
}