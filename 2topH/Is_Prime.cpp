#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, f = 0;

    cin >> n;

    for(i = 2; i < n; i++) {
        if(n%i == 0) {
            f = 1; 
            break;
        }
    }
    
    if(n == 1 || f == 1) cout << "No\n";
    else cout << "Yes\n";


    return 0;
}