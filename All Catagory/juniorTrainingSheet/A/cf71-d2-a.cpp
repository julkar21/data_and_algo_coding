#include <iostream>

using namespace std;
int main(){
    int i,n,k;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        if(s.length()>10){
            k=s.length();
            cout<<s[0]<<k-2<<s[k-1];
            cout<<endl;
        }else{
            cout<<s;
            cout<<endl;
        }
    }
}
