#include<iostream.h>
#include<conio.h>

class distance
{
    public:
    int ft1,ft2,inch1,inch2,addft,addin;

    void getdata()
    {
        cout<<"Enter first distance: ";
        cin>>ft1;
        cin>>inch1;
        cout<<"Enter Second distance: ";
        cin>>ft2;
        cin>>inch2;
    }
    void addition()
    {
        addft = ft1 + ft2;
        addin = inch1 + inch2;

        if(addin>=12)
        {
            addft ++;
            addin -=12;
        }
    }
    void putdata()
    {
        cout<<"Addition of Distance: " <<addft <<"feet" <<"and" <<addin <<"inch";
    }
};

void main()
{
    distance s;
    s.getdata();
    s.addition();
    s.putdata();
    getch();
}