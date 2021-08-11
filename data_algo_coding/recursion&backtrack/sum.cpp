#include <bits/stdc++.h>
using namespace std;


int sum(int n){
    if(n==0)return 0;

    int prevsum=sum(n-1);
    cout<<prevsum<<" ";

    return n+prevsum;
}
void dec(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }

    dec(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    dec(n);
    //int ret=sum(n);
    //cout<<ret;
    return 0;
}
