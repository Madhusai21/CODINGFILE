// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the values of a,b:"<<endl;
    cin>>a>>b;
    int temp;
    cout<<"before swapping of two numbers:"<<a<<b<<endl;
    try
    {
        temp=a;
        a=b;
        b=temp;
        cout<<"after swapping of two numbers:"<<a<<b<<endl;
        throw(temp);
    }
    catch (int x)
    {
        cout<<"caught the integer values";
    }
    return 0;
}

    

