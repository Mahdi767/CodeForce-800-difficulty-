#include <bits/stdc++.h>
using namespace std;

int main() {
int x;
cin>>x;
if(x==1){
    cout<<1/1<<endl;
}else if(x==2){
    cout<<2/2<<endl;
}else if(x==3){
    cout<<3/3<<endl;
}else if(x==4){
    cout<<4/4<<endl;
}else if(x==5){
    cout<<5/5<<endl;
}else if(x>5 && x%5==0){
cout<<x/5<<endl;
}else if(x>5 && x%5 != 0){
    cout<<(x/5)+1<<endl;
}

}
