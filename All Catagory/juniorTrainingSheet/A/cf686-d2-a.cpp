#include <bits/stdc++.h>
using namespace std;
int main(){

    long long n,d,k,distress=0;
    cin>>n>>d;
    char ch;
    for(int i=0;i<n;i++){
        cin>>ch;
        cin>>k;
        if(ch=='+'){
            d+=k;
        }else if(ch=='-'){
            if(d<k){
                distress++;
                continue;
            }else d-=k;
        }
    }
    cout<<d<<" "<<distress<<endl;

    return 0;
}
