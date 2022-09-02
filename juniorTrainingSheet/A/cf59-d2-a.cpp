#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    int Count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')Count++;
    }
    int lower = s.size()-Count;
    if(Count>lower){
        for(int i=0;i<s.size();i++){
             putchar(toupper(s[i]));
        }
    }
    else {
        for(int i=0;i<s.size();i++){
            putchar(tolower(s[i]));
        }
    }

    return 0;
}
