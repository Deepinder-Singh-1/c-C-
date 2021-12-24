#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"please enter the number for the type of matrix";
    cin>>n1>>n2>>n3;
    int m1[n1][n2];int m2[n2][n3];int ans[n1][n3];
    for(int i =0;i<n1;i++){
        for(int j=0;j<=n2;j++){
            cout<<"please enter the m1["<<i<<"]["<<j<<"]";
            cin>>m1[i][j];
        }
    }
     for(int i =0;i<n2;i++){
        for(int j=0;j<=n3;j++){
            cout<<"please enter the m2["<<i<<"]["<<j<<"]";
            cin>>m1[i][j];
        }
    }
    for(int i =0;i<n1;i++){
        for(int j=0;j<n3;j++){
           // cout<<"please enter the m1["<<i<<"]["<<j<<"]";
            ans[i][j]=0;
        }
    }
     for(int i =0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;i<n1;k++){

                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
      for(int i =0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<"ans["<<i<<"]["<<j<<"]"<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    

}