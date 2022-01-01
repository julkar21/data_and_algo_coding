#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    vector<int>v,v1;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    for(int j=0;j<m;j++){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    int k,l=0;bool found = false;
    for( k=0;k<n;k++){
        if(l==v1.size()-1){
            cout<<"YES"<<endl;
            found=true;
            break;
        }
        if(v[k]==v1[l]&&l!=v1.size()-1){
            l++;
        }else if(l>0&&v[k]!=v1[l]){
            break;
        }
    }
    if(!found)
    cout<<"NO"<<endl;

    return 0;
}

