#include <bits/stdc++.h>
using namespace std;

void reverse_num(int n){
    if(n==0)return;
    cout<<n%10<<endl;
    reverse_num(n/10);
}


int main(){

    int n;
    cin>>n;
    reverse_num(n);

    return 0;
}
