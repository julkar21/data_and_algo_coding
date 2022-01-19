#include <bits/stdc++.h>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
    return;

}

int main(){


    int a,b;
    cin>>a>>b;
    swap(a,b);

    return 0;
}
