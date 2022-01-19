#include <iostream>
using namespace std;

void print(int n){
    for(int i=1;i<=n;i++){
        if(i==n){
            cout<<n;
            return;
        }

        cout<<i<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    print(n);

    return 0;
}
