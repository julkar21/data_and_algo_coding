#include <bits/stdc++.h>
using namespace std;

void run(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
}

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)cin>>a[i];
    int max,min;
    if(n==1){
        max=a[0];
        min=a[0];
    }else{
        if(a[0]>a[1]){
            max=a[0];
            min=a[1];
        }else{
            max=a[1];
            min=a[0];
        }
        for(int i=2;i<n;i++){
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }
    }
    cout<<max<<" "<<min<<endl;

    return 0;
}

