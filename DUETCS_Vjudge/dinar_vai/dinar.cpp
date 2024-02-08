#include <bits/stdc++.h>
using namespace std;

 void solve(){
    int n;
    cin>>n;
    int js;
    if(n%2==1)js=n/2+1;
    else js=n/2;
    int bs=n/2;

    long long ja[js],ba[bs];
    for (int i = 0,jp=0,bp=0; i < n; i++)
    {
        int x;
        cin>>x;
        if(i%2==0){
            ja[jp]=x;
            jp++;
        }else
        {
            ba[bp]=x;
            bp++;
        }
    }

    long long  j=0,jm=-1e9;
    if(js>0){
        for (int i = 0; i < js; i++)
        {
            if(ja[i]>=0)j+=ja[i];
            jm=max(jm,ja[i]);
        }
        if(jm<0)j=jm;
    }

    long long  b=0,bm=-1e9;
    if(bs>0){
        for (int i = 0; i < bs; i++)
        {
            if(ba[i]>=0)b+=ba[i];
            bm=max(bm,ba[i]);
        }
        if(bm<0)b=bm;
    }

    if(bs==0)cout<<j;
    else
    {
        cout<<max(j,b);
    }
    cout<<endl;
 }

// palindrome function
void myPalindrome(){
    string s;
    cin>>s;
    int n= s.size();
    for (int i = 0; i <= n/2; i++)
    {
        if(s[i]!=s[n-1-i]){
            cout<<"not palindrome\n";
            return;
        }
    }
    cout<<"palindrome\n"; 

}

// pattern print
void solve(){
    int n,m;
    cin>>n>>m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            if((j+i)%2)cout<<'#'; // দাবার খোট print
            else { cout<<" "; }  
        } cout<<endl; 
    }
    // another
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(j==0||i==0||i==n-1||j==m-1)cout<<'*'; // diagonal
            else { cout<<" "; }
        }
        cout<<endl; 
    }
 }

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        myPalindrome();
    }
    
    return 0;
}