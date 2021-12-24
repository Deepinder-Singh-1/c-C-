#include"bits/stdc++.h"
using namespace std;
int main (){
    int n,m;
    cout<<"enter the size of the matrix";
    cin>>n>>m;
    int target;
    cout<<"please enter the number u want to search";
    cin>>target;
    int mat[n][m];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    bool found = false;
    int r=0,c=n-1;
    while(r<m&&c>=0){
        if(mat[r][c]==target){
            found=true;
        }
        mat[r][c]>target?c--:r++;
    }
    if(found){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}