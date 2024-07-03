#include <iostream>
using namespace std;

template <class T>
inline T square(T x)
{
   T result;
   result = x * x;
   return result;
};
int main()
{
    int a,a1;
    a=3;
    a1=square <int> (a);
    cout<<a<<":"<<a1<<endl;
   return 0;
}