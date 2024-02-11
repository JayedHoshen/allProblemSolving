#include <bits/stdc++.h>
using namespace std;

void isPalindrome(){
    string s; cin >> s;
    int n = s.size();
    for (int i = 0; i <= n/2; i++) {
        if(s[i]!=s[n-1-i]) {
            cout<<"No\n";
            return;
        }
    } cout << "Yes\n"; 
}

int main()
{
    isPalindrome();

    return 0;
}