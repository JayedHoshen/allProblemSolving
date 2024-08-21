#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    while(n2 != 0) {
        int tmp = n1 % n2;
        n1 = n2;
        n2 = tmp;
    }
    cout << n1 << endl;

    return 0;
}