#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,m,c;
    while(cin>>n>>m>>c && n!=0){
        int rem=c;
        cout<<((n-7)*(m-7)+rem)/2<<"\n";
    }

    return 0;
}
