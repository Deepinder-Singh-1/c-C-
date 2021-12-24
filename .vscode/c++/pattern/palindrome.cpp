#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    for (int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){//this gives hte space in he pattern;
            cout<<"  ";
        }
        int k=i;
        for( ;j<=n;j++){//this gives the decreasing order in the  pattern;
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){//this guves the increasing order in the pattern;
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}