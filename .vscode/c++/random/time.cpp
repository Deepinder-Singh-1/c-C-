#include<iostream>
using namespace std;
class tme{
    int h,m,s;
    public:
    tme operator +(tme t2){
        tme t3;
        t3.s=s+t2.s;
        // while (t3.s>60)
        // {
        //     t3.s=t3.s-60;
        //     t3.m++;
        // }
        // while (t3.m>60)
        // {
        //     t3.m=t3.m-60;
        //     t3.h++;
        // }
        t3.m=t2.m+m+t3.s/60;
       
        t3.h=t2.h+h+t3.m/60;
        t3.s=t3.s%60;
        t3.m=t3.m%60;
        return t3;   
    }
    void insert(){
        cout<<"please enter the hour min and sec ";
        cin>>h>>m>>s;
    }
    void display(){
        cout<<h<<m<<s;
    }

};
main () 
{
    tme t1,t2,  t3;
}
 
