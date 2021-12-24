#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=i;j++){
            cout<<"*";
        }
        int sapce = 2*n-2*1;
        for( int j=1;j<=sapce;j++){
            cout<<" ";
        }
        for(int j=i;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=i;j<=i;j++){
            cout<<"*";
        }
        int sapce = 2*n-2*1;
        for( int j=1;j<=sapce;j++){
            cout<<" ";
        }
        for(int j=i;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }

    return 0;
}