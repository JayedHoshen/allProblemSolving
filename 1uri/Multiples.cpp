#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int a, b, max, min;
    cin >> a >> b;

    max = (a>b?a:b);
    min = (a<b?a:b);

    if(max % min == 0) cout << "Sao Multiplos\n";
    else cout << "Nao sao Multiplos\n";

    return 0;
}