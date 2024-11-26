#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m;
cin>>n>>m;
int sum =0;
for(int  i = 1; i<=n;i++){
    while(sum>=m){
sum+=i;
}}
if(sum==m){
    cout<<"0"<<endl;
}else {
    cout<<sum-m<<endl;
}
}

