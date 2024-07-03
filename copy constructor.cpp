#include<iostream>
using namespace std;
class robo
{
    private:
    int a,b;
    public:
    robo()
    {
        a=20;
        b=89;
    }
    robo(int x,int y)
    {
        a=x;
        b=y;
    }
    robo(robo & obj)
    {
        a=obj.a;
        b=obj.b;
    }
    void display()
    {
       int c;
       c=a+b;
       cout<<c<<endl;
    }
};
int main()
{
    robo r1;
    r1.display();
    robo r(12,34);
    robo r2=r;
    r.display();
    r2.display();
    return 0;
}
