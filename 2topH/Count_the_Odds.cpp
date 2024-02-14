#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, a, b, c = 0;

    cin >> a >> b;

    for (i = a; i <= b; i++)  if(i%2) c++;
 
    cout << c << "\n";

    return 0;
}