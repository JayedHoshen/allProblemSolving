#include <bits/stdc++.h>
using namespace std;

int main()
{
    tuple <string, string, int> t = {"Jayed", "khan", 101};

    auto [first_name, last_name, roll] = t;
    cout << first_name << " " << last_name << " " << roll << endl;

    return 0;
}