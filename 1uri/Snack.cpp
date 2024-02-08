#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    double r;
    cin >> x >> y;

    if(x == 1) r = y*4.00;
    else if(x == 2) r = y*4.50;
    else if(x == 3) r = y*5.00;
    else if(x == 4) r = y*2.00;
    else if(x == 5) r = y*1.50;
    
    cout << "Total: R$ " << fixed << setprecision(2) << r << "\n";

    return 0;
}