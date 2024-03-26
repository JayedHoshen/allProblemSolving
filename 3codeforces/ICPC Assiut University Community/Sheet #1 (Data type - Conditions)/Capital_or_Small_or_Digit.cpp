#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;

    cin >> ch;

    if(ch >= '0' && ch <= '9') cout << "IS DIGIT\n";
    else {
        cout << "ALPHA\n";

        if(ch >= 'A' && ch <= 'Z') cout << "IS CAPITAL\n";
        if(ch >= 'a' && ch <= 'z') cout << "IS SMALL\n";
    }

    return 0;
}