#include<iostream>
using namespace std;
class pointer
{
    public:
    int a,b;
    pointer()
    {
        a=10;
    }
    void display()
    {
        int *ptr=&a;
        cout<<" pointer variable is :"<<*(ptr)<<endl;
        int * p=new int(20);
        cout<<"the value of a is:"<<*(p)<<endl;
    }
};
int main()
{
    pointer p1;
    p1.display();
    return 0;
}