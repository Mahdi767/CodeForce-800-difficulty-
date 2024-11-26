#include <bits/stdc++.h>
using namespace std;
int main() {
int T;
cin>>T;
while(T--){
   int n,k,x;
   cin>>n>>k>>x;
if((k*2)> x){
    cout<<n*k-((k*2)-x)<<endl;
}else if((k*2)<=x){
    cout<<n*k<<endl;
}
}
}
