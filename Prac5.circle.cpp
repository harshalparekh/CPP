#include<iostream.h>
#include<conio.h>
#include<math.h>
class circle
{
    float radius,area,circumference;
    public:
    void getdata()
    {
        cout<<"Enter radius: ";
        cin>>radius;
    }
    void data()
    {
        area=3.14*radius*radius;
        cout<<"\nArea of circle: " <<area;
    }
    void circ()
    {
        circumference=2*3.14*radius;
        cout<<"\ncircumference of circle: "<<circumference;
    }
};

void main()
{
    clrscr();
    circle c;
    c.getdata();
    c.data();
    c.circ();
    getch();
}