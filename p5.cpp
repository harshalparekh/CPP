//5. WAP for class student accept name and roll, accept and display data for 3 objects.

#include<iostream>
using namespace std;
class student{
    int rollno;
    char name[20];
public:
    void accept(){
        cout<<"Enter name of the student: ";
        cin>>name;
        
        cout<<"Enter roll no of the student: ";
        cin>>rollno;
    }
    void display(){
        cout<<name<<endl<<rollno;
    }
};
int main(){
    
    student *stu = new student [3];
    student *su = stu;
    
    for (int i=0; i<3;i++){
        stu->accept();
        stu++;
    }
    for (int i=0; i<3;i++){
        su->accept();
        su++;
    }
    return 0;
}
