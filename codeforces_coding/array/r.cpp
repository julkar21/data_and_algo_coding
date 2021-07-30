#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    vector<int>v,v1;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    for(int j=0;j<n;j++){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    if(v==v1)cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    return 0;
}
