#include<iostream>
using namespace std;
class bubblesort
{
    private:
    int i,j,n,a[20],temp;
    public:
    void getdata()
    {
        cout<<"enter the number of elements:"<<endl;
        cin>>n;
        cout<<"enter the elements:"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void sort()
    {
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
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
    void display()
    {
        for(i=0;i<n;i++)
        {
            cout<<" sorted elements are:"<<a[i]<<endl;
        }
    }
};
int main()
{
    bubblesort b1;
    b1.getdata();
    b1.sort();
    b1.display();
    return 0;
}
