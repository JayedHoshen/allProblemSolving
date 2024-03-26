#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, fd;

    cin >> n;

    fd = n / 1000;

    if(fd & 1) cout << "ODD\n";
    else cout << "EVEN\n";

    return 0;
}