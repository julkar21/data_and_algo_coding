#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
   char ch[26];
   for(int i='a';i<='z';i++){
        ch[i-'a']=i;
    }
    int j=0;
    for(int i=0;i<n;i++,j++){
        if(j==k){
            j=0;
        }
        cout<<ch[j];
    }

    //cout<<0+'a'<<endl;
    return 0;
}
