/*
 14.    WAP for student class having data member name and id. Write constructor to accept data and display for two objects.
 */

#include <iostream>
using namespace std;

class student{
    int id;
    char name[20];
public:
    student(){
        cout<<"Enter Name: ";
        cin>>name;
        
        cout<<"Enter Id";
        cin>>id;
        
        
    }
    
    void diusplay(){
        cout<<name<<endl<<id;
    }
};

int main() {

    student *b = new student[2];
    student *c = b;
    
    for(int i=0; i<2; i++){
        b->diusplay();
        b++;
    }
    
    
    return 0;
}
