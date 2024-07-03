#include <iostream>
using namespace std;
class A
{
    public:
    int a,b;
    void getdata()
    {
        cout<<"enter values:";
        cin>>a>>b;
    }
    friend void add(A ob);
};
void add(A ob)
{
    int c;
    c=ob.a + ob.b;
    cout<<"sum="<<c;
}
int main()
{
    A KK;
    KK.getdata();
    add(KK);
    return 0;
}
