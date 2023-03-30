#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int m;
    char ch;
    for(int i=0;i<n;i++){
        cin>>m>>ch;
        for(int j=1;j<=m;j++){
            if(j==m){
                cout<<ch;
            }else {
                cout<<ch<<" ";
            }
        }cout<<endl;
    }

}

int main(){

    int n;
    cin>>n;
    print(n);

    return 0;
}
