/*
 17.    WAP for class STAFF having data members name & post. Accept data for 3 objects and display names of staff who are H.O.D.
 */

#include <iostream>
using namespace std;

class STAFF{
    int post;
    char name[20];
public:
    void accept(){
        cout<<"Enter Name: ";
        cin>>name;
        
        cout<<"(1)Teaching Staff"<<endl<<"(2)Non Teaching Staff"<<endl<<"(3)HOD"<<endl;
        cin>>post;
    }
    
    void diusplay(){
        if(post==3){
            cout<<name<<endl<<"POST: HOD";
        }
        
    }
};

int main() {

    STAFF *s = new STAFF [3];
    STAFF *p = s;
    
    for(int i=0; i<3; i++){
        s->accept();
        s++;
    }
    for(int i=0; i<3; i++){
        p->diusplay();
        p++;
    }
    return 0;
}
