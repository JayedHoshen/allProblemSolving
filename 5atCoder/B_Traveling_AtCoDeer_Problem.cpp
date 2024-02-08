#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, minimum = 1000, maximum = 0;
    cin >> n;

    while(n--) {
        cin >> a;
        if(a < minimum) minimum = a;
        if(a > maximum) maximum = a;
    }
    cout << (maximum - minimum) << '\n';

    return 0;
}