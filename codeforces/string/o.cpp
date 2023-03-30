#include <bits/stdc++.h>
using namespace std;
int main(){

    int charCount[26]={0};
    int n;
    cin>>n;
    char ch;
    for(int i=0;i<n;i++){
        cin>>ch;
        charCount[ch-'a']++;
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<charCount[i];j++){
            cout<<(char)('a'+i);
        }
    }

    return 0;
}

