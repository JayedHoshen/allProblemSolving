#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, area;
    cin >> a >> b >> c;

    if((a+b > c) && (b+c > a) && (a+c > b)) {
        cout << "Perimetro = " << fixed << setprecision(1) << (a+b+c) << "\n";
    }
    else {
        area = ((a+b) * c) / 2;
        cout << "Area = " << fixed << setprecision(1) << area << "\n";
    }

    return 0;
}