// Online C++ compiler to run C++ program onli
#include<iostream>
using namespace std;
class marks
{
    private:
    int i;
    public:
    marks()
    {
        i=1;
    }
    void operator ++()
    {
        ++i;
    }
    void display()
    {
        cout<<"i="<<i<<endl;
    }
};
int main()
{
    marks m1;
    m1.display();
    ++m1;
    m1.display();
    return 0;
}


