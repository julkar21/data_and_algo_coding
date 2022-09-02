#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool isSpace(unsigned char c) {
    return (c == '!' || c == '.' ||
        c == '?' || c == ',');
}


int main(){
    int Count=0;
    string s,w;
    getline(cin, s);

    //s.erase(remove_if(s.begin(), s.end(), isSpace), s.end());

    for(int i=0;i<s.length();i++) {
        if(!isalpha(s[i])) s[i] = ' ';
    }
    //cout <<s<<endl;
    istringstream iS(s);
        while(iS>>w) {
           Count++;
    }
    cout<<Count<<endl;
    return 0;
}
