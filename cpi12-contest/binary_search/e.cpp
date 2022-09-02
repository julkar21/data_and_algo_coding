#include <bits/stdc++.h>
using  namespace std;
typedef long  long ll;

int T;

void solve() {
    ll x;
    cin>>x;
     for (ll i = 1 ; i <= 10000 ; i++ ){
        ll l = 1 , r = 10000 ;
         while (l < r){
            ll mid = l+r >> 1 ;
            ll sum = i*i*i + mid*mid* mid;
             if (sum > x) r = mid;
             else  if (sum < x) l = mid + 1 ;
             else {
                cout<<"YES\n";
                 return ;
            }
        }
    }
    cout<<"NO\n ";
}

int main(){
    cin>>T;
     while (T-- ){
        solve();
    }

    return  0 ;
}
