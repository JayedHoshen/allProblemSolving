#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tc; 
    cin >> tc;
    
    while(tc--) {
        string s, meridian; cin >> s;

        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        if(hour < 12) {
            meridian = "AM";
        }
        else{
            meridian = "PM";
        }

        if(hour == 0) {
            hour = 12;
        } 
        else if(hour > 12) {
            hour = hour - 12;
        }
        
        cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << meridian << endl;
   }

    return 0;
}