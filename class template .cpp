 #c+++
#include <iostream>
using namespace std;
template< class T>
class memos
{
    private:
     T x;
     T y;
     T z; 
    public:
    memo(T a,T b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        z=x+y;
        cout<<z<<endl;
    }
};
int main()
{
    memo <int> m1(8,9);
    memo<float>m2(23.4,45.6);
    m2.display();
    m1.display();
}
    
