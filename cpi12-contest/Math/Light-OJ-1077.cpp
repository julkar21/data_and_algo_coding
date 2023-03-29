#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int countLatticePoints(int x1, int y1, int x2, int y2) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int gcdXY = gcd(dx, dy);
    return gcdXY + 1;
}

int main() {
    int n,cs=1;
    cin>>n;
    while(cs<=n){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        int numLatticePoints = countLatticePoints(x1, y1, x2, y2);
        cout << "Case "<< cs++ <<": "<< numLatticePoints << endl;
    }
    return 0;
}
