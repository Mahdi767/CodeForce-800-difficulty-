/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-07 12:08:58
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int result =0;
        for (int i = 0; i < n; i++)
        {
           if(i%2==0){
result+=ar[i];
           }else{
            result-=ar[i];
           }
        }
        cout<<result<<endl;

   
}
 return 0;}