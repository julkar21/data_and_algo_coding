#include <iostream>
using namespace std;
long long fact(long long n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
int main() {
   long long n, r, comb, per;
   cin>>n;
   cin>>r;
   comb = fact(n) / (fact(r) * fact(n-r));
   per = fact(n) / fact(n-r);
   cout <<comb<<" "<<per;
   return 0;
}
