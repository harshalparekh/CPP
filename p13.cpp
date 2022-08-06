/*
 13.    WAP for class Account with variables acc_no& balance. Accept data for 10 accounts and display acc_no having balance greater than 5000.
 */

#include <iostream>
using namespace std;

class account{
    int acc_no, balance;
public:
    void accept(){
        cout<<"Enter account number: ";
        cin>>acc_no;
        cout<<"Enter Balance";
        cin>>balance;
    }
    
    void display(){
        if(balance>5000)
            cout<<acc_no<<endl<<balance<<endl<<endl;
    }
};

int main() {

    account *b = new account[2];
    account *c = b;
    
    for (int i=0; i<2; i++){
        b->accept();
        b++;
    }
    
    for (int i=0; i<2; i++){
        c->display();
        c++;
    }
    
    return 0;
}
