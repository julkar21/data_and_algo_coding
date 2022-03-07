#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &v, int x){
    int lo=0,hi=v.size(),mid;
    while(lo<hi){
        mid=(lo+hi)/2;
        if(x<=v[mid]){
            hi=mid;
        }else{
            lo=mid+1;
        }
    }
    return lo;
}

int upperBound(vector<int> &v,int x){
    int lo=0,hi=v.size(),mid;
    while(lo<hi){
        mid=(lo+hi)/2;
        if(x>=v[mid])lo=mid+1;
        else hi=mid;
    }
    return lo;
}

int main(){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int T;
    cin>>T;
    while(T--){
        int num;
        cin>>num;
        int first = lowerBound(v,num);
        int second = upperBound(v,num);

        //cout<<first<<" "<<second<<endl;
        if(first == 0) cout<<"X ";
        else cout<< v[first-1] <<" ";
        if(second == n) cout<<"X"<<endl;
        else cout << v[second] <<endl;
    }
    return 0;
}
