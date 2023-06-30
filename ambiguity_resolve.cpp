//THIS IS MODIFIED
//MODIFIED TWICE

#include <iostream>
using namespace std;

class base
{
public:
    void display();
};
void base :: display()
{
    cout<<"THIS IS BASE CLASS"<<endl;
}
//-----------------------------------------------
class derived : public base
{
public:
    void display();
};
void derived :: display()
{
    cout<<"THIS IS DERIVED CLASS"<<endl;
}
//-----------------------------------------------
int main()
{
    derived d;
    base b;
    cout<<endl<<"d.display() called"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    d.display();
    cout<<"-------------------------------------------------"<<endl;
    cout<<endl<<"b.display() called"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    b.display();
    cout<<"-------------------------------------------------"<<endl;
    cout<<endl<<"d.base :: display() called"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    d.base :: display();
    cout<<"-------------------------------------------------"<<endl;
    cout<<endl<<"d.derived :: display() called"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    d.derived :: display();
    cout<<"-------------------------------------------------"<<endl;
    return 0;
}
