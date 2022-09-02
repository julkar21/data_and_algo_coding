#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int Count=0;
    string s,w;
    vector<string> dict;
    getline(cin, s);


    for(int i=0;i<s.length();i++) {
        if(!isalpha(s[i])) s[i] = ' ';
    }

    istringstream iS(s);
        while(iS>>w) {
           dict.push_back(w);
           Count++;
    }
    int j=1;
    for(auto w: dict){
        reverse(w.begin(),w.end());
        if(j==Count){
            cout<<w<<endl;
        }else{
            cout<<w<<" ";
        }
        j++;
    }
    return 0;
}

