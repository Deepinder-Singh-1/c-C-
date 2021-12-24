#include<iostream>
using namespace std;
#include<climits>
bool pairsum(int arr[],int n,int k){
    int low =0;int high=n-1;
    while(low<high){
        if(arr[low]+arr[high==k]){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        if (arr[low]+arr[high]>k){
            high--;
        }
        else {
            low++;
        }
    }
    return false;
}

int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr,8,k)<<endl;
    return 0;
}




























 

// //maximum circular subarray
// int kadanes(int arr[],int n){
//     int currentsum=0;
//     int maxsum=INT_MIN;
//     for(int i =0;i<n;i++){
//         currentsum+=arr[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//         maxsum=max(maxsum,currentsum);
//     }
//     return maxsum;
// }
// int main (){
//     int n ;
//     cin>>n;
//     int  arr[n];
//     for(int i =0;i<n;i++){
//         cin>>arr[i];

//     }
//     int wrapsum;
//     int nonwrapsum;
//     int totalsum=0;
//     nonwrapsum=kadanes(arr,n);
//     for(int i=0;i<n;i++){
//         totalsum+=arr[i];
//         arr[i]=-arr[i];
//     }
//     wrapsum=totalsum +kadanes(arr,n);
//     cout<<max(wrapsum,nonwrapsum);

// }






// //kadanes alogrithm
// int main (){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     int currsum=0;
//     int maxsum=INT_MIN;
//     for(int i =0;i<n;i++){
//         currsum+=arr[i];
//         if (currsum<0){
//             currsum=0;
//         }
//         maxsum=max(maxsum,currsum);
//     }
// }




// int main (){//cumulatve sum approch;
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     int currsum[n+1];
//     currsum[0]=0;
//     for(int i=0;i<=n;i++){
//         currsum[i]= currsum[i-1]+arr[i-1];
//     }

// }




//Maximum subarray sum
// int main ()//print all the subarray in a array
// {
//     int n ;
//     cin>>n;
//     int arr[n];
//     for (int i =0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             for(int k=i;k<=j;k++)
//             {
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
    




//  int main(){
 
//      int n;
//      cin>>n;
//       int a[n];
//       for(int i=0;i<n;i++)
//       {
//           cin>>a[i];
//       }
//       const int N= 1e6+2;
//       int idx[N];
//       for(int i =0;i<N;i++)
//       {
//           idx[i]=-1;
//       }
//       int minidx= INT_MAX;
//       for(int i=0;i<n;i++)
//       {
//           if(idx[a[i]] != -1)
//           {
//               minidx = min(minidx,idx[a[i]]);

//           }
//           else
//           {
//               idx[a[i]]=i;
//           }
//       }
//       if(minidx==INT_MAX)
//       {
//           cout<<"-1"<<endl;
//       }
//       else
//       {
//           cout<<minidx+1<<endl;
//       }
//       return 0;
// }  