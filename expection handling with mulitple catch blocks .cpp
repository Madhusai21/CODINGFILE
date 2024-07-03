#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n values:"<<endl;
    cin>>n;
    try
    {
        if(n==1)
        {
            throw 10;
        }
        if(n==2)
        {
            throw 20.3;
        }
        if(n==3)
        {
            throw 'x';
        }
    }
    catch(int a)
    {
        cout<<"caught the integers values "<<endl;
    }
    catch(double b)
    {
        cout<<"caught the double values:"<<endl;
    }
    catch(char c)
    {
        cout<<"caught the character:"<<endl;
    }
    cout<<" expection is over "<<endl;
    return 0;
}
