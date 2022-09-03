#include <bits/stdc++.h>
using namespace std;
#define lim 100
#define ll long long
bool marked[lim];
vector <ll> prime;

void seive(){
    marked[0]=marked[1]=1;
    prime.push_back(2);
    for(int i=3;i<lim;i+=2){ //even num is not checked.
        if(!marked[i]){
                prime.push_back(i);
            for(int j=i*i;j<=lim;j+=i+i){
                marked[j]=true;
            }
        }
    }
}

int main(){
    seive();
    //for(int i=0;i<prime.size();i++)cout<<prime[i]<<endl; [for print prime nunmbere]
    int t,c=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll orgi=n;
        vector<int>ans(300,0);
        for(int i=2;i<=orgi;i++){
            n=i;
            for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
                while(n%prime[i]==0){
                    ans[prime[i]]++;
                    n=n/prime[i];
                }
            }
            if(n>1)ans[n]++;
        }
        cout<<"Case "<<c++<<": "<<orgi<<" = ";
         int flag=1;
        for(auto &i : prime){
            if(ans[i]){
                if(flag){
                    cout<<i<<" ("<<ans[i]<<")";
                    flag=0;
                }else{
                    cout<<" * "<<i<<" ("<<ans[i]<<")";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
