#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,q,cas=0,inputn,inputq;
    vector<int> nv,nq;
    while(scanf("%d%d",&n,&q)){
        if(n==0&&q==0)break;
        cas++;
        for(int i=0;i<n;i++){
            cin>>inputn;
            int x=inputn;
            nv.push_back(x);
        }
        for(int i=0;i<q;i++){
            cin>>inputq;
            int x=inputq;
            nq.push_back(x);
        }
        sort(nv.begin(),nv.end());
        cout<<"CASE# "<<cas<<":"<<endl;
        for(int j=0;j<q;j++){
            bool ans= binary_search(nv.begin(),nv.end(),nq[j]);
            vector<int>::iterator pos = lower_bound(nv.begin(),nv.end(),nq[j]);
            if(ans){
                printf("%d found at %d\n",nq[j],(pos-nv.begin()+1));
            }
            else printf("%d not found\n",nq[j]);
        }
        nv.clear();
        nq.clear();
    }

    return 0;
}
