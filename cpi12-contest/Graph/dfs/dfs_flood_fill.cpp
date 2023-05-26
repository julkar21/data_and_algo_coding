#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;

void dfs(int i,int j,int initColor,int newColor, vector<vector<int>>& image){
    int n = image.size();
    int m = image[0].size();
    if(i<0 || j<0) return;
    if(i>=n || j>=m) return;
    if(image[i][j] != initColor) return;

    image[i][j] newColor;

    dfs(i-1,j, initColor, newColor, image);
    dfs(i+1,j, initColor, newColor, image);
    dfs(i,j-1, initColor, newColor, image);
    dfs(i,j+1, initColor, newColor, image);
}

int main(){


    return 0;
}
