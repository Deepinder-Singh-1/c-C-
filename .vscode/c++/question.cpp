#include<iostream>
#include<string.h>
using namespace std;


class buying {
    float totalprice,sale,price;
    float havetopay;
    int numberofitem;
    void bill(){//for printing
        cout<<"Item      Quantity\tPrice";
        cout<<"--------------------------------------";
        //cout<<
        cout<<"Total price : $"<<havetopay;
        cout<<"You saved $"<<totalprice-havetopay<<" today.";


    }
    void listofitem(char *p,int n){//for comparing
        if("Milk"==p||"milk"==p){
            int amount=n;
            price=0;
            price=n*3.97;
            int i;
            for(int i=0;n<2;i++){
                n-2;
            }
           
            float pricemilk=n*3.97+i*2.5;
            havetopay=pricemilk;
            totalprice=totalprice+price;
        }
        else if("bread"==p||"Bread"==p){
            price=0;
            price=n*2.17;
            int i;
            for(int i=0;n<3;i++){
                n-3;
            }
            float breadprice=n*2.17+i*2.00;
            havetopay=breadprice;
            totalprice=totalprice+price;
        }
        else if ("Banana"==p||"banana"==p){
            price=0;
            price=n*0.99;
            totalprice+=price;
            havetopay=totalprice;
        }
        else if("Apple"==p||"apple"==p){
            price=0;
            price=n*0.89;

            totalprice+=price;
            havetopay=totalprice;
        }
    }

};
int main(){
    buying p;
    int nummberofproducts;

    char c,productname;;
    do{
        cout<<"Please enter the product you want to buy";
        cin>>productname;
        cout<<"please enter the amount u want";
        cin>>nummberofproducts;
        p.listofitem(&productname,nummberofproducts);
        cout<<"do you want to enter more products y/n";
        cin>>c;
    }
    while(c!=0);
    


}