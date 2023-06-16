#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    set<char>s1;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            char ch = s[i];
            s1.insert(ch);
        }
    }
    cout<<s1.size()<<endl;

    return 0;
}
