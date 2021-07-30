#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    vector <int> v,v1;
    cin>>t;
    while(t--){
        int n,num;
        cin>>n;
        for(int k=0;k<n;k++){
            cin>>num;
            v.push_back(num);
        }
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                int cal=0;
                cal=v[i-1]+v[j-1]+j-i;
                v1.push_back(cal);
            }
        }
        cout<<*min_element(v1.begin(),v1.end())<<endl;
        v1.clear();
        v.clear();

    }
    return 0;
}

