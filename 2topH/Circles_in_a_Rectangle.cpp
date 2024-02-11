/* Area of rectangle = 4r * 2r = 8 * r*r 
   Area of circle = 2 * 3.1416 * r*r
   result = 8*r*r - 2*3.1416*r*r = 2*r*r(4-3.1416) = 1.7168 * r*r;
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double R, A, tc;
    cin >> tc;

    for(int i = 1; i <= tc; i++) {
        cin >> R;    
        A = R*R*1.7168;
        printf("Case %d: %.2lf\n", i, A);
    }   

    return 0;
}