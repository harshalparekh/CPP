/*
 12.    WAP to declare a class ‘birthday’ having data member as day, month and year. Accept and display data for 5 objects use pointer to object.
 */

#include <iostream>
using namespace std;

class birthday{
    int day, month, year;
public:
    void accept(){
        cout<<"Enter day: ";
        cin>>day;
        cout<<"Enter month: ";
        cin>>month;
        cout<<"Enter year: ";
        cin>>year;
    }
    
    void display(){
        cout<<day<<endl<<month<<endl<<year;
    }
};

int main() {

    birthday *b = new birthday[5];
    birthday *c = b;
    
    for (int i=0; i<5; i++){
        b->accept();
        b++;
    }
    
    for (int i=0; i<5; i++){
        c->display();
        c++;
    }
    
    return 0;
}
