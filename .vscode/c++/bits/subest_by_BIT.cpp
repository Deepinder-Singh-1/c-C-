#include<iostream>
using namespace std;
//{a,b,c}

//{}       000
//{c}      001
//{b}      010
//{a}      100
//{a,c}    101
//{a,b}    110
//{a,b,c}  111
//here the chater represt 1 and 0is shoing the not avalibility of array
//2ki power n -1
//is the number subset formula
void subset (int arr[],int n ){
    for (int i = 0; i < (1<<n); i++)//here the 1<<n is 2 power n
    {
        for(int j=0;j<n;j++){
            if(i&1<<j){
                cout<<arr[j]<<" "<<endl;;
            }
        }
    }
    
}
int main (){

    int arr[4]={1,2,3,4};
    subset(arr,4)  ; 
    return 0;
}
