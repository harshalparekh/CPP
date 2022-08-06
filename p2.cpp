//2. WAP for salary class having variables basic, ta, da, hra. Use da, hra as parameters for constructor. Calculate gross salary.

#include<iostream>
using namespace std;

class salary
{
    int basic,ta,da,hra;
    public:
    salary(int d,int h)
    {
        basic=1000;
        ta=2000;
        da=d;
        hra=h;
    }
    void display()
    {
        cout<<"Gross salary: "<<basic+ta+da+hra<<endl;
    }
};
int main(){
    salary s(1000,2000);
    s.display();
    return 0;
}

