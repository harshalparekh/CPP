//9.       WAP for class calci accept two numbers and display addition, subtraction, division and multiplication using different functions.

#include <iostream>
using namespace std;

class calci{
public:
    void add(int n1, int n2){
        cout<<n1+n2<<endl;
    }
    void sub(int n1, int n2){
        cout<<n1-n2<<endl;
    }
    void mul(int n1, int n2){
        cout<<n1*n2<<endl;
    }
    void div(int n1, int n2){
        cout<<n1/n2<<endl;
    }
};

int main() {

    int a, b;
    
    cout<<"Enter Number 1: ";
    cin>>a;
    
    cout<<"Enter Number 2: ";
    cin>>b;
    
    calci c;
    c.add(a,b);
    c.sub(a,b);
    c.mul(a,b);
    c.div(a,b);
    
    return 0;
}
