#include <bits/stdc++.h>
using namespace std;
int main() {
    int ans=0;
int T;
cin>>T;
while(T--){
    
    int x,y,z;
   cin>>x>>y>>z;
   if(x==1 && y==1 && z==1 || x==1 && y==1|| y==1 && z==1|| z==1 && x==1){
    ans++;
   }
   
}
cout<<ans<<endl;
}
