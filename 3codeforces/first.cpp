
// #include <bits/stdc++.h> wrong answer
// #include <string>
// #include <vector>

// using namespace std;

// int shortestSubstring(const string& s) {
//     int n = s.size();
//     vector<int> prefix(n, 0);

//     for(int i = 1; i < n; i++) {
//         int j = prefix[i-1];
//         while(j > 0 && s[i] != s[j]) 
//         j = prefix[j-1];
//         if(s[i] == s[j]) prefix[i] = j+1;
//     }
//     int shortest = n - prefix[n-1];
//     for(int i = 0; i < n-1; i++) {
//         if(prefix[i] == prefix[n-1]) 
//         shortest = min(shortest, n-1-i);
//     }
//     return shortest;
// }

// int main() {
//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int result = shortestSubstring(s);
//         cout << result << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// void solve() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         int t = 2;
//         char first = '#';
//         char second = '.';

//         if(i%2) {
//             first = '.';
//             second = '#';
//         }
        
//         while(t--) {
//             for(int j = 0; j < n; j++) {
//                 int p = 2;
//                 while(p--) {
//                     if(j%2 == 0) {
//                         cout << first;
//                     }
//                     else {
//                         cout << second;
//                     }
//                 }
//             }
//             cout << "\n";
//         }
//     }
// }

// signed main()
// {
//     int t;
//     cin >> t;

//     while(t--) {
//         solve();
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int tc; 
//     cin >> tc;
    
//     while(tc--) {
//         string s, meridian; cin >> s;

//         int hour = stoi(s.substr(0, 2));
//         int minute = stoi(s.substr(3, 2));

//         if(hour < 12) {
//             meridian = "AM";
//         }
//         else{
//             meridian = "PM";
//         }

//         if(hour == 0) {
//             hour = 12;
//         } 
//         else if(hour > 12) {
//             hour = hour - 12;
//         }

//         cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << meridian << endl;
//    }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int tc, a, b, c;    
//     cin >> tc;
    
//     while(tc--) {
//         cin >> a >> b >> c;
        
//         if((a<b) && (b < c)) cout << "STAIR\n";
//         else if((a<b) && (b > c)) cout << "PEAK\n";
//         else cout << "NONE\n";
//     }
    
//     return 0;
// }