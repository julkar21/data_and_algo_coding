#include <bits/stdc++.h>
using namespace std;
int main(){

    int charCount[5]={0};
    string ch;
    getline(cin,ch);
    for(int i=0;i<ch.length();i++){

        if(ch[i]=='e'||ch[i]=='E')charCount[0]++;
        else if(ch[i]=='g'||ch[i]=='G')charCount[1]++;
        else if(ch[i]=='y'||ch[i]=='Y')charCount[2]++;
        else if(ch[i]=='p'||ch[i]=='P')charCount[3]++;
        else if(ch[i]=='t'||ch[i]=='T')charCount[4]++;
    }
    /*for(int i=0;i<26;i++){
        for(int j=0;j<charCount[i];j++){
            cout<<(char)('a'+i);
        }
    }*/
    int mini=INT_MAX,comp;

    for(int i=0;i<5;i++){
       comp=charCount[i];
       if(comp<mini)mini=comp;
    }
    cout<<mini<<endl;


    return 0;
}

