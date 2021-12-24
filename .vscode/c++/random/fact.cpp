#include<iostream>
using namespace std;
int fact(int n){
    int numerical;
    for (int i =2;i<=n;i++){
        numerical *=i;
    }
    return(numerical);
}
int main (){
    int  n;
    cin>>n;
    fact(n);
}