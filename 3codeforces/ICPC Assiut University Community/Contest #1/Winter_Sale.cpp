#include <bits/stdc++.h>
using namespace std;

#define set(n) fixed << setprecision(n)

int main()
{
    double b_discount, discount, a_discount;

    cin >> discount >> a_discount;

    b_discount = (a_discount*100) / (100-discount);

    cout << set(2) << b_discount << endl;

    return 0;
}