#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    double x,comp;
    cin>>x;
    n=x;
    comp=x-n;
    if(comp>0){
        cout<<"float "<<n<<" "<<comp<<endl;
    }else cout<<"int "<<n<<endl;

    return 0;
}

