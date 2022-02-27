#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    double AB,AC,BC,AD,ADE,ABC;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        scanf("%lf%lf%lf%lf",&AB,&AC,&BC,&ADE);
        ABC=ADE+1;
        AD=sqrt(ADE/ABC)*AB;
        printf("Case %d: %.10lf\n",i,AD);
    }

    return 0;
}
