#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++) { 
        bool flag = true;
        int x = i;

        while(x > 0) { 
            int digit = x % 10;
            if(digit != 4 && digit != 7) {
                flag = false;
            }
            x /= 10;
        }
        
        if(flag) {
            cout << i << " ";
            cnt++;
        }
    }

    if(cnt == 0) cout << "-1";
    cout << endl;

    return 0;
}