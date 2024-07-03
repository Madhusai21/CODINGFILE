include<iostream>
using namespace std;
class A
{
    public:
    int x;
    void getdata()
    {
        cout<<"enter x values:";
        cin>>x;
    }
    friend class c;
};
class B
{
    public:
    int y;
    void getdata()
    {
        cout<<"enter y values:";
        cin>>y;
    }
    friend class c;
};
class C
{
    public:
    void display(A&t1,B&t2)
    {
        cout<<t1.x<<endl;
        cout<<t2.y<<endl;
        cout<<t1.x+t2.y<<endl;
    }
};
int main()
{
    A a1;
    B b1;
    C c1;
    a1.getdata ();
    b1.getdata();
    c1.display(a1,b1);
    return 0;
}
