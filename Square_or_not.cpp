#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int cnt = 0;
        int n;
        cin >> n;
        vector<string> s(n);  // Dynamically allocate strings
        for (int i = 0; i < n; i++) {
            cin >> s[i];  // Read each string
            for (char c : s[i]) {  // Iterate through each character in the string
                if (c == '1') {
                    cnt++;  // Count if the character is '1'
                }
            }
        }

        // First, check if the count is 2
        if (cnt == 2) {
            cout << "No" << endl;
        } 
        // Then, check if the count is even
        else if (cnt % 2 == 0) {
            cout << "Yes" << endl;
        } 
        // Otherwise, print "No"
        else {
            cout << "No" << endl;
        }
    }
}
