#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"it is base class"<<endl;
    }
};
class derived :public base
{
    public:
    void display()
    {
        cout<<"it is derived class:"<<endl;
    }
};
class child :public base
{
    public:
    void display()
    {
        cout<<"it is a child class:"<<endl;
    }
};
void function (base *ptr)
{
    ptr->display();
}
int main()
{
    base *ptr;
    derived d1;
    child c1;
    ptr= & d1;
    function(ptr);
    ptr= & c1;
    function (ptr);
    return 0;
}