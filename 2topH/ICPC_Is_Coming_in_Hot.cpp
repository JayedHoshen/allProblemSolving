#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N; cin >> N;
    int i, j, n, c1, c2 = 0;
    char C;

    n = N.size();

    for(i = 0; i < n; i++) {
        c1 = 0;
        
        for(j = 0; j < n; j++) {
            if(N[i] == N[j]) c1++;
        }
        if(c1>c2) {
            c2 = c1;
            C = N[i];
        }
        if(c1==c2) C = min(C,N[i]);
    }

    cout << C << endl;

    return 0;
}