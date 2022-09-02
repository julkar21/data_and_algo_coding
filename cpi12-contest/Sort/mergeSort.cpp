#include <bits/stdc++.h>
using namespace std;
#define LIM 10005;
/*vector <int> C;
void Merge_(vector<int> &A,vector<int> &B){

    int i=0,j=0;

    while(i<A.size()&&j<B.size()){
        if(A[i]<=B[j])C.push_back(A[i++]);
        else {
            C.push_back(B[j++]);
        }
    }
    while(i<A.size())C.push_back(A[i++]);
    while(j<B.size())C.push_back(B[j++]);
    for(int k=0;k<C.size();k++)cout<<C[k]<<" ";
    return;
}
*/
vector<int> A;
void Merge(int lft,int rgt){
    int mid=(lft+rgt)/2;
    int i=lft,j=mid+1;
    vector<int>temp;
    while(i<=mid&&j<=rgt){
        if(A[i]<=A[j])temp.push_back(A[i++]);
        else {
            temp.push_back(A[j++]);
        }
    }
    while(i<=mid)temp.push_back(A[i++]);
    while(j<=rgt)temp.push_back(A[j++]);

    for(int i=lft,k=0;i<=rgt;i++,k++)A[i]=temp[k];

}

void MergeSort(int lft,int rgt){
        if(lft>=rgt)return;
        int mid=(lft+rgt)/2;
        MergeSort(lft,mid);
        MergeSort(mid+1,rgt);
        Merge(lft,rgt);
}

int main(){

    A = {1,3,5,7,8,9,2,4,6,10};
    for(int v : A) printf("%d ", v);
    cout << endl;
    MergeSort(0,A.size()-1);
    for(int v : A) printf("%d ", v);
    cout << endl;
    return 0;
}
