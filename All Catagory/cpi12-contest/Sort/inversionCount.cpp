#include <bits/stdc++.h>
using namespace std;
#define LIM 10005;


vector<int> A;
int MergeAndCount(int lft,int rgt){
    int mid=(lft+rgt)/2;
    int i=lft,j=mid+1;
    vector<int>temp;
    int cnt=0;
    while(i<=mid&&j<=rgt){
        if(A[i]<=A[j])temp.push_back(A[i++]);
        else {
            cnt+=j-mid-1;
            temp.push_back(A[j++]);
        }
    }
    while(i<=mid){
        cnt+=j-mid-1;
        temp.push_back(A[i++]);
    }
    while(j<=rgt)temp.push_back(A[j++]);

    for(int i=lft,k=0;i<=rgt;i++,k++)A[i]=temp[k];
   // cout<< cnt;
    return cnt;
}

int MergeSortAndInversionCnt(int lft,int rgt){
        if(lft>=rgt)return 0;
        int mid=(lft+rgt)/2;
        int ans=0;
        ans = MergeSortAndInversionCnt(lft,mid)+MergeSortAndInversionCnt(mid+1,rgt)+
        MergeAndCount(lft,rgt);
        //cout<<ans;
        return ans;
}

int main(){

    //A = {5,2,3,8,6,1};
    A = {3,3,1,2};
    cout<<MergeSortAndInversionCnt(0,A.size()-1);
    return 0;
}

