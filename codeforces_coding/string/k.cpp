#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int m=0,a=0,cas=0;
        string s,r;
        cin>>s>>r;
        if(s.size()<r.size()){
            m=s.size();
            a=r.size()-s.size();
            cas=1;
        }
        else{
            m=r.size();
            a=s.size()-r.size();
            cas=2;
        }


        for(int j=0;j<m;j++){
            cout<<s[j]<<r[j];
        }

        if(cas==1){
            for(int i=0;i<a;i++){
                cout<<r[m+i];
            }
        }else{
            for(int i=0;i<a;i++){
                cout<<s[m+i];
            }
        }
        cout<<endl;

    }


    return 0;
}


