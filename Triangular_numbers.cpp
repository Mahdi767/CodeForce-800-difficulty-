#include <bits/stdc++.h>
using namespace std;

int main() {
    float n;
cin>>n;
float T1=-1+sqrt(1+4*n*2);
float T2=-1-sqrt(1+4*n*2);
if(fmod(T1, 2.0) == 0.0){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
