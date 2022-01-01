#include <bits/stdc++.h>
using namespace std;
int main(){

    string str,str1;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(islower(str[i]))cout<<(char)toupper(str[i]);
        else if(str[i]==',')cout<<" ";
        else cout<<(char)tolower(str[i]);
    }

    return 0;
}

