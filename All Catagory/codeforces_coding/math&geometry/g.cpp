#include <bits/stdc++.h>
using namespace std;
int main(){

    long long n;
    long long sum=0;
    vector<long long>v;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){

        if(n%i==0){
            if(n/i==i){
                v.push_back(i);
            }else{
                v.push_back(i);
                v.push_back(n/i);
            }

        }

    }
    //i and n/i both are divisors of n

    for(int i=v.size()-1;i>=0;i--){
        //cout<<v[i]<<' ';
        sum+=v[i];
    }
    cout<<sum<<endl;

    return 0;
}
