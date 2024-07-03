#include <iostream>
using namespace std;
class a
{
    public: int a;
};
class b:public virtual a
{
    public: int b;
};
class c:public virtual a
{
    public: int c;
};
class d:public b ,public c
{
    int D;
    public:
    d()
    {
        a=1;
        b=2;
        c=7;
        D=9;
    }
    void display()
    {
        int e;
        e=(a+b+c+D);
        cout<<e<<endl;
    }
};
int main()
{
    d e1;
    e1.display();
    return 0;
}