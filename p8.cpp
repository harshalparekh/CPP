//8. WAP to declare a class ‘Box’ having data member as height, width and breadth. Accept data and display volume using pointer to the object.

#include <iostream>
using namespace std;

class box{
    float height, width, breadth;
    
public:
    
    void accept(){
        cout<<"Enter height: ";
        cin>>height;
        
        cout<<"Enter width: ";
        cin>>width;
        
        cout<<"Enter bredth: ";
        cin>>breadth;
    }
    
    void display(){
        cout<<height*width*breadth<<endl;
    }
};

int main() {
    
    box *b = new box;
    box *a = b;
    
    for(int i=0; i<2; i++){
        b->accept();
        b++;
    }
    
    for(int i=0; i<2; i++){
        a->display();
        a++;
    }
    
    return 0;
}
