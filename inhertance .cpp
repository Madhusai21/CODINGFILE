// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class gparent
{
    public:
    int x,y,z;
    gparent()
    {
        cout<<"gparent constructor"<<endl;
        x=19;
        y=12;
        z=x+y;
    }
};
class parent : public gparent
{
    public:
    int a,b,f;
    parent()
    {
        cout<<"parent class constructor"<<endl;
        a=10;
        b=89;
        f=a-b;
    }
};
class child:public parent
{
    public:
    int c,d,e;
    child()
    {
        cout<<"child class constructor"<<endl;
        c=90;
        d=23;
        e=c*d;
    }
};
int main ()
{
    child c1;
    cout<<"gparent class variables"<<endl;
    cout<<c1.x<<endl;
    cout<<c1.y<<endl;
    cout<<"gparent class addition"<<endl;
    cout<<c1.z<<endl;
    cout<<"parent class variables"<<endl;
    cout<<c1.a<<endl;
    cout<<c1.b<<endl;
    cout<<"parent class substraction"<<endl;
    cout<<c1.f<<endl;
    cout<<" child class variables"<<endl;
    cout<<c1.c<<endl;
    cout<<c1.d<<endl;
    cout<<"child class muliplication"<<endl;
    cout<<c1.e<<endl;
    return 0;
}
    