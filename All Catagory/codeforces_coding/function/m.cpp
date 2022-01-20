#include <bits/stdc++.h>
using namespace std;

void distinct(int n){
    vector<int> v;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int Count;
    Count=distance(v.begin(),unique(v.begin(),v.begin()+n));
    cout<<Count<<endl;
}

int main(){

    int n;
    cin>>n;
    distinct(n);

    return 0;
}
