#include <bits/stdc++.h>
using namespace std;
#define sqr(x) ((x)*(x))
struct point{
    double x,y,z;
};
double dist(point a,point b){
    return sqrt(sqr(a.x-b.x)+sqr(a.y-b.y)+sqr(a.z-b.z));
}
int main(){

    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        point A,B,P;
        scanf("%lf%lf%lf",&A.x,&A.y,&A.z);
        scanf("%lf%lf%lf",&B.x,&B.y,&B.z);
        scanf("%lf%lf%lf",&P.x,&P.y,&P.z);

        point lo=A,hi=B;
        for(int i=0;i<50;i++){
            point m1,m2;
            m1={lo.x+(hi.x-lo.x)/3,lo.y+(hi.y-lo.y)/3,lo.z+(hi.z-lo.z)/3};

            m2={lo.x+2*(hi.x-lo.x)/3,lo.y+2*(hi.y-lo.y)/3,lo.z+2*(hi.z-lo.z)/3};

            if(dist(P,m1)<dist(P,m2))hi=m2;
            else lo=m1;
        }
        printf("Case %d: %.10f\n",i,dist(P,hi));
    }

    return 0;
}
