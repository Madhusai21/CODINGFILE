#include <iostream>
using namespace std;
class second;
class frist
{
    private:
    int x;
    public:
    void indata()
    {
        x=10;
    }
    void display()
    {
        cout<<"x value is:"<<x<<endl;
    }
    friend void swap(frist&f,second&s);
};
class second 
{
     private:
    int y;
    public:
    void indata()
    {
        y=19;
    }
    void display()
    {
        cout<<"y value is :"<<y<<endl;
    }
    friend void swap(frist&f,second&s);
};
void swap(frist&f,second&s)
{
    int temp;
    temp=f.x;
    f.x=s.y;
    s.y=temp;
}
int main ()
{
    frist f1;
    second s1;
    f1.indata();
    s1.indata();
    cout<<"before swapping"<<endl;
    f1.display();
    s1.display();
    swap(f1,s1);
    cout<<"after swapping"<<endl;
    f1.display();
    s1.display();
    return 0;
}
