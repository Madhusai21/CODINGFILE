#include<iostream>
using namespace std;
class robo
{
    private:
    int x,y;
    public:
    robo()
    {
        x=10;
        y=20;
    }
    friend void disp(robo r);
};
void disp(robo r)
{
    cout<<"x="<<r.x;
    cout<<"y="<<r.y;
}
int main()
{
    robo obj;
    disp(obj);
    return 0;
}
