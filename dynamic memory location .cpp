// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    ptr=new int [size];
    cout<<"enter the array storedvalues:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<"values of array:"<<endl;
    for( int i=0;i<size;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}