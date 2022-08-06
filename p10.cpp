/*
 10.    WAP for time class having data member’s hrs, mins, sec. write constructor to accept data and display for two objects.
 */

#include <iostream>
using namespace std;

class time{
    int hrs, mins, sec;
public:
    time(){
        cout<<"Enter Hour: ";
        cin>>hrs;
        cout<<"Enter Minutes: ";
        cin>>mins;
        cout<<"Enter Seconds: ";
        cin>>sec;
    }
    
    void display(){
        cout<<hrs<<endl<<mins<<endl<<sec;
    }
};

int main() {

    class  time *t = new class time [2];
    //class time *p = t;
    
    for(int i=0; i<2; i++){
        t->display();
        t++;
    }
    
    
    return 0;
}
