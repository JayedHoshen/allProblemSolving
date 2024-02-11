#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, i, n;
    double avg, sum = 0;
    cin >> tc;

    for(i = 1; i <= tc; i++) {
        cin >> n;

        sum += n;
        avg = sum / i;
         
        cout << avg << "\n";
    }

    return 0;
}