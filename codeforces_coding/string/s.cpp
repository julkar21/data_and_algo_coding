#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;
    string s;
    int Count=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='L'){
            Count++;
        }else{
            v.push_back(Count);
            i=i+Count-1;
            Count=0;
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i]*2;j++){
            if(j<(v[i]*2)/2){
                cout<<"L";
            }else cout<<"R";
        }cout<<endl;
    }


    return 0;
}
