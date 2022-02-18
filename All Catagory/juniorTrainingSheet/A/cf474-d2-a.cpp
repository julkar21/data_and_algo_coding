#include <bits/stdc++.h>
using namespace std;
int main(){

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char direction;
    string sentence;
    cin>>direction;
    cin>>sentence;
    if(direction=='L'){
        int pos=0;
        for(int i=0;i<sentence.size();i++){
            pos=s.find(sentence[i]);
            //if(pos==0||pos==29)cout<<s[pos];
            cout<<s[pos+1];
        }
    }else{
        int pos=0;
        for(int i=0;i<sentence.size();i++){
            pos=s.find(sentence[i]);
            //if(pos==0||pos==29)cout<<s[pos];
            cout<<s[pos-1];
        }
    }

    return 0;
}
