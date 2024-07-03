#include <iostream>
using namespace std;
class funoverload
{
    public:
    int r,w,l,h,a,b;
    int area(int a)
    {
        return 3.14*a*a;
    }
    double area(double a)
    {
        return 6*a*a;
    }
    double area(double w ,int l)
    {
        return w*l;
    }
    double area(double b,double h)
    {
        return 1/2*b*h;
    }
    double area(double h, double w,int l)
    {
        return 2*l*h+l*w+h*w;
    }
};
int main ()
{
    funoverload f1;
    cout<<" \n area of circle:"<<f1.area(2);
    cout<<" \n area of cube:"<<f1.area(6);
    cout<<" \n area of rectangle:"<<f1.area(2,6);
    cout<<" \n area of traingle:"<<f1.area(3.5);
    cout<<" \n area of cubriod:"<<f1.area(2,4,6);
    return 0;
}