#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    int n=s.size();
    int start=0,en=n-1;
    while(start<en){
        //cout<<start<<" "<<en<<endl;
        swap(s[start],s[en]);
        start++;
        en--;

    }
    cout<<s<<endl;

    return 0;
}
