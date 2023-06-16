#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int n,a,target;
bool exist[N];
int main(){
    memset(exist,false,sizeof exist);
    cin>>n;
    target=n;
    for(int i=0;i<n;i++){
        cin>>a;
        exist[a]=true;
        if(a==target){
            while(exist[a]){
                cout<<a<<" ";
                a--;
                target--;
            }
        }
        cout<<endl;
    }
    return 0;
}
