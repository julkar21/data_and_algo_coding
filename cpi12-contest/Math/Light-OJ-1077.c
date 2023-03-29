#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

// function to calculate the greatest common divisor (GCD) of two integers
int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

// function to count the number of lattice points on a line segment between two points A and B
int countLatticePoints(int x1, int y1, int x2, int y2) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int gcdXY = gcd(dx, dy);
    return gcdXY + 1;
}

// main function to test the above code
int main() {
    int x1 = 3, y1 = 3, x2 = -1, y2 = -1;
    int numLatticePoints = countLatticePoints(x1, y1, x2, y2);
    cout << "Number of lattice points on the segment AB: " << numLatticePoints << endl;
    return 0;
}

