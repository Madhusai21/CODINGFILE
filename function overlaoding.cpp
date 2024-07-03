#include <iostream>
using namespace std;
class sample
{
    public:
    void add(int a,int b)
    {
         cout<<a+b<<endl;
    }
    void add(int a)
    {
        cout<<a+a;
    }
};
int main()
{
    sample s1;
    s1.add(1,2);
    s1.add(3);
    return 0;
}
