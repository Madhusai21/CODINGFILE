#include<iostream>
using namespace std;
class memo
{
    public:
    virtual void getdata()=0; //pure virtual function
};
class robo:public memo
{
    public:
    void getdata()
    {
        cout<<"enter the a,b values:"<<endl;
        int a,b;
        cin>>a>>b;
        cout<<"addition of two numbers:"<<(a+b)<<endl;
    }
};
class remo:public memo
{
    public:
    void getdata()
    {
        cout<<"enter the x,y values:"<<endl;
        int x,y;
        cin>>x>>y;
        cout<<" addition of two numbers:"<<(x+y)<<endl;
    }
};
int main()
{
    robo r1;
    r1.getdata();
    remo m1;
    m1.getdata();
    return 0;
}
