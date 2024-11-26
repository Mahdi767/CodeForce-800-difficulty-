#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans =0;
string s;
cin>>s;
for(int i= 0;i<s.size()-1;i++){
if(s[i] !=s[i+1]){
    ans++;
}
}cout<<ans<<endl;
}
