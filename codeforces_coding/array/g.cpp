#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    vector <int> v,v1;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    v1=v;
    reverse(v1.begin(),v1.end());
    bool found=false;
    for(int j=0;j<n;j++){
        if(v[j]==v1[j])continue;
        else {
            found = true;
        }
    }
    if(found)cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;

    return 0;
}
