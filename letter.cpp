#include <bits/stdc++.h>
using namespace std;

int main() {
string t1,t2;
cin>>t1>>t2;
reverse(t2.begin(), t2.end());
if (t2 == t1) {
   cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
