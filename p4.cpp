//4. WAP to declare a class ‘Product’ having data member as name, price. Accept and display this data for one object using
//  *pointer to the (new?) object*


#include<iostream>
using namespace std;

class product{
    int price;
    char name[20];
public:
    void accept(){
        cout<<"Enter name of the product: ";
        cin>>name;
        
        cout<<"Enter price of the product: ";
        cin>> price;
    }
    void display(){
        cout<<name<<endl<<price;
    }
};
int main(){
    product *ptr = new product;
    ptr -> accept();
    ptr -> display();
    
    return 0;
}
