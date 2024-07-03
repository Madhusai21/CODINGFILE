#include <iostream>
using namespace std;
template< class T>
void bubble( T a[], int n)
{
    T temp;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[]={3,4,5,2,1};
    bubble(a,5);
    cout<<" a sorted elements"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    return 0;
}