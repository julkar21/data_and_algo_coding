#include <bits/stdc++.h>
using namespace std;
#define sqr(x) ((x)*(x))
struct point{
    double x,y;
};
double dist(point a,point b){
    return sqrt(sqr(a.x-b.x)+sqr(a.y-b.y));
}
int main(){

    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        point A,B,C,D;
        scanf("%lf%lf",&A.x,&A.y);
        scanf("%lf%lf",&B.x,&B.y);
        scanf("%lf%lf",&C.x,&C.y);
        scanf("%lf%lf",&D.x,&D.y);

        point lo1=A,hi1=B;
        point lo2=C,hi2=D;
        for(int i=0;i<50;i++){
            point m11,m12;
            point m21,m22;
            m11={lo1.x+(hi1.x-lo1.x)/3,lo1.y+(hi1.y-lo1.y)/3};
            m12={lo1.x+2*(hi1.x-lo1.x)/3,lo1.y+2*(hi1.y-lo1.y)/3};

            m21={lo2.x+(hi2.x-lo2.x)/3,lo2.y+(hi2.y-lo2.y)/3};
            m22={lo2.x+2*(hi2.x-lo2.x)/3,lo2.y+2*(hi2.y-lo2.y)/3};

            if(dist(m11,m21)<dist(m12,m22))
            {
                hi1=m12;
                hi2=m22;
            }
            else {
                lo1=m11;
                lo2=m21;
            }
        }
        printf("Case %d: %.10f\n",i,dist(hi1,hi2));
    }

    return 0;
}

