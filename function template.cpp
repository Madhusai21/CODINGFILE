#include <iostream>
using namespace std;
template <class T>
T sum(T a,T b)
{
    cout<<"total is :"<<a+b;
}
int main()
{
    sum(2.5,3.9);
}