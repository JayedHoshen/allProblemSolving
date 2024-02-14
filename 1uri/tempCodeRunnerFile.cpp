#include <bits/stdc++.h>
using namespace std;

int main()
{
    float i, j;

    for(i = 0; i <= 2.1; i+=0.2) {
        for(j = 1; j <= 3; j++) {
            cout << "I=" << i << " J=" << i+j << "\n";
        } 
    }

    return 0;
}