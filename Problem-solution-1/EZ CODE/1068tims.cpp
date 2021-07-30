#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    if(n<=0){
        cout<<(n*(1-n)/2)+1<<endl;
    }else
        cout<<(n*(1+n)/2)<<endl;

    return 0;
}
