#include<iostream>
using namespace std;
class temp{
    int n1,n2,n3;
    public :
    void insert ()
    {
        cout<<"please enter the numbers";
        cin>>n1>>n2;
        max();
    }
    void display()
    {
        cout<<n3;
    }
    private :
    void max()
    {
        n3=(n1>n2)?n1:n2;
    }
};
main ()
{
    temp t;
    t.insert();
    t.display();
    
}