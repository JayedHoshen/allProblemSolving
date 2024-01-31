#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main()
{
    long long int A, B, r;
    cin >> A >> B;

    if(A%B != 0) r = (A/B) + 1;
    else r = A / B;
    cout << r << nl; 

    return 0;
}