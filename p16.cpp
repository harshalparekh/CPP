/*
 16.    WAP to declare a class ‘Book having data members as title, name and price. Accept and display information using pointer to the object.
 */

#include <iostream>
using namespace std;

class book{
    int price;
    char title[20], name[20];
public:
    void accept(){
        cout<<"Enter Name Of the book: ";
        cin>>name;
        
        cout<<"Enter title Of the book: ";
        cin>>title;
        
        cout<<"Enter Price of the book: ";
        cin>>price;
    }
    
    void diusplay(){
        cout<<name<<endl<<title<<endl<<price;
    }
};

int main() {

    book *b = new book[2];
    b->accept();
    b->diusplay();
    
    return 0;
}
