#include<iostream>
using namespace std;int n;

int main(){ 
    int n,j,i;
    cin>>n;
    for(i=1;i<=3;i++){
        for(j=1;j<=n;j++){
            if(((i+j)%4==0)||((i==2)&&(j%4==0))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } 
        cout<<endl;
    }
    return 0;
}
// int main (){
//     int n,space ;
//     cin>>n;
//     int cf=1;
//     for(int i =0;i<=n;i++){
//         for( space=1;space<=n-i;space++){
//             cout<<"  ";
//         }
//         for(int j=0;j<=i;j++){
//             if(j==0||i==0){
//                 cf=1;
//             }
//             else{
//                 cf=cf*(i-j+1)/j;
//             }
//             cout<<cf<<"   ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }




//  int main(){
//     int n;
//     cin>>n; 
//     for(int i=1;i<=n;i++){
//         int empty_space=2*n-2*i;
//         for(int j=1;j<=i;j++){
//            if(j==1||j==i){
//                 cout<<"*";
//            }
//            else{
//                cout<<" ";
//            }
//         }
//         for(int j=1;j<=empty_space;j++){
//             cout<<" ";
//         }
//         for(int j =1;j<=i;j++){
//             if(j==1||j==i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }
//     for(int i=n;i>=1;i--){
//         int empty_space=2*n-2*i;
//         for(int j=1;j<=i;j++){
//             if(j==1||j==i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         for(int j=1;j<=empty_space;j++){
//             cout<<" ";
//         }
//         for(int j =1;j<=i;j++){
//             if(j==1||j==i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// } 










// int main(){
//     int n;
//     cin>>n; 
//     for(int i=1;i<=n;i++){
//         int empty_space=2*n-2*i;
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=empty_space;j++){
//             cout<<".";
//         }
//         for(int j =1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     for(int i=n;i>=1;i--){
//         int empty_space=2*n-2*i;
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=empty_space;j++){
//             cout<<".";
//         }
//         for(int j =1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// } 

// int main (){
//     int n ;
//     cin>>n;
//     for(int i=1 ;i<=n;i++){
//         for(int j =1;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" "<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main (){
//     int n,j ;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
        
//         for(int j=1;j<=n;j++){
//             if(i==1||i==n){
//                 cout<<"*";
//             }
//             else{
//                 if(j==1||j==n){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//diamond pattern
// int main (){
//     int n;
//     cin>>n;
//     int space = (2*n-1)/2;
//     for(int i =0;i<=n;i++){
//         for(int j =1;j<=space;j++){
//             cout<<" ";
//         }
//         for (int j = 1; j < 2*i-1; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//         space--;
        
//     }
//     space=0;
//     for(int i =n;i>=1;i--){
//         for(int j =1;j<=space;j++){
//             cout<<" ";
//         }
//         for (int j = 1; j < 2*i-1; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//         space++;
        
//     }
//     return 0;
// }


//palindromic pattern
// int main (){
//     int n,j,i; 
//     cin>>n;
//     //int number;
//     for(int i =1;i<=n;i++){
//         int number=i;
//         for(int j=1;j<(n-i);j++ ){
//             cout<<" ";
//         }
//         for(;j<=n;j++){
//             cout<<number<<" ";
//             number--;
//         }
//         number =1;
//         for(;j<(n+i);j++){
//             number++;
//             cout<<number<<" ";
//         }
//         for(;j<=(2*n-1);j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }