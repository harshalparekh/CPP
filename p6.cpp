//6. WAP for simple interest=P*N*R/100, where constructor will have default value R=11.5, accept and display data for two objects.


#include <iostream>
using namespace std;

class interest{
    float p, n, r;
    
public:
    interest(){
        r=11.5;
    }
    void accept(){
        cout<<"Enter Principal: ";
        cin>>p;
        
        cout<<"Enter Time: ";
        cin>>n;
    }
    
    void display(){
        cout<<(p*n*r)/100<<endl;
    }
};

int main() {
    
    interest *int1 = new interest [2];
    interest *int2 = int1;
    
    for(int i=0; i<2; i++){
        int1->accept();
        int1++;
    }
    
    for(int i=0; i<2; i++){
        int2->display();
        int2++;
    }
    
    return 0;
}
