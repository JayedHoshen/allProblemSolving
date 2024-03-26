#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char sy;

    cin >> a >> sy >> b;

    if(sy == '+') cout << (a+b) << endl;
    else if(sy == '-') cout << (a-b) << endl;
    else if(sy == '*') cout << (a*b) << endl;
    else if(sy == '/') cout << (a/b) << endl;
    
    return 0;
}