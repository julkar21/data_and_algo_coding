#include <bits/stdc++.h>
#define LIM 2000006

using namespace std;

int main(){

    int k,n,cnt[LIM];
    string s;
    cin>>k>>s;
    s="0"+s;

    for(int i=1;i<s.size();i++){
        cnt[i] = cnt[i-1] + (s[i] == '1');
    }

    n=s.size();
    long long ans;

    for(int i=0;i<n;i++){
        ans+=upper_bound(cnt+i+1, cnt+n, k+cnt[i]) - lower_bound(cnt+i+1, cnt+n, k+cnt[i]);
    }
    cout<<ans<<endl;

    return 0;
}
