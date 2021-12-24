#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    for (int num =a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
    // for(i=2;i<n;i++){
    //     if (n%i==0){
    //         cout<<"non prime number"<<endl;
    //         break;
    //     }
    // }
    // if(i==n){
    //     cout<<"Prime"<<endl;
    // }
    // for(i=0;i<100;i++){
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }
    // int pocketmoney=3000;
    // for(int date=1;date<=30;date++){

    //     if(date%2==0){
    //         continue;
    //     }
    //     if(pocketmoney==0){
    //         break;
    //     }
    //     cout<<"Go out today!"<<endl;
    //     pocketmoney=pocketmoney-300;
    // }
}