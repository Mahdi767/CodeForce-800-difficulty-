#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0;
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> n1(n);
    vector<int> n2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        cin >> n1[i];
        cin >> n2[i];
        if (n1[i] >= 2400 && n2[i] > n1[i])
        {
            cnt++;
        }
    }
    if (cnt > 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
