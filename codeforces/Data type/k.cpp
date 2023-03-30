#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector <int> v;
    int a,b,c;
    cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    cout<<v[0]<<" "<<v[2]<<endl;
    return 0;
}


