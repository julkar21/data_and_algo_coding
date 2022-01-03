#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
   getline(cin,s);
    for(int i=0;i<s.length()-4;i++){
       if(s.length()<5)break;
       if(s.substr(i,5)=="EGYPT"){
           s.replace(i,5," ");
           //cout<<i<<endl;
          //  cout<<s.substr(i,5)<<endl;
      }
    }
  //  string str="Julkar";
   // str.replace(3,2," ");
   // cout<<str;
   cout<<s<<endl;
    return 0;
}
