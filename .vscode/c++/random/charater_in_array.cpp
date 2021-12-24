#include<iostream>
using namespace std;
int main (){
    //to find the largest word in the sentence;
    int n ;
    cin.ignore();
    cin>>n;

    char arr[n+1];
    cin.getline(arr,n);//originally when we press space the compiler thinks its new word
    cin.ignore();
    int i =0;
    int current_length=0,max_length=0;
    while (1)
    {
            if(arr[i]==' '||arr[i]=='\0')
        {
            if(current_length>max_length){
                max_length=current_length;
            }
            current_length=0;  
        }
        else;
        current_length++;
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<max_length<<endl;
}