#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char sy;
    cin >> a >> sy >> b;

    if(sy == '>' && (a > b)) cout << "Right\n";
    else if(sy == '<' && (a < b)) cout << "Right\n";
    else if(sy == '=' && (a == b)) cout << "Right\n";
    else cout << "Wrong\n";

    return 0;
}