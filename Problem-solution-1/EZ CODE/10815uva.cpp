#include <bits/stdc++.h>
using namespace std;

void clean(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        ch[i]=tolower(ch[i]);
        if(!isalpha(ch[i]))ch[i]=' ';
        i++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    char ch[210];
    string w;
    set<string>s;
    while(gets(ch)){
        clean(ch);
        istringstream iS(ch);
        while(iS>>w){
            s.insert(w);
        }
    }
    for(string w: s){
        cout<<w<<endl;
    }
    return 0;
}
