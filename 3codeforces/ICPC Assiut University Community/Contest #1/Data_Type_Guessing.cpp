#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, k, a, r, cs;
    long long int LR; 
    
    scanf("%lf %lf %lf", &n, &k, &a);

    LR = (n*k) / a;
    r = (n*k) / a;
    cs = r - LR;

    if(cs > 0) printf("double\n"); 
    else if(r > 2147483647) printf("long long\n");
    else printf("int\n");

    return 0;
}