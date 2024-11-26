#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans=0;
int T;
cin>>T;
vector<int>num(T);
for(int i=0;i<T;i++){
    cin>>num[i];
    
}
sort(num.begin(),num.end());
for(int i=0;i<T-2;i=i+2){
    if(num[i+2]>num[i+1]){
        ans++;
    }
}
cout<<ans<<endl;
}
