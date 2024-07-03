// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the values:"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        throw b;
        else
        {
            c=a/b;
            cout<<"c:"<<c;
        }
    }
    catch(int x)
    {
        cout<<"can't divide by:"<<x;
    }
    return 0;
}