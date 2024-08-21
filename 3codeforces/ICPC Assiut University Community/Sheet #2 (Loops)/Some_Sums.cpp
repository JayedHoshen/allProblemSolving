#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n) {
    int sum = 0;
    sum += (n%10);
    sumOfDigit(n/10);
}

int main()
{
    

    return 0;
}