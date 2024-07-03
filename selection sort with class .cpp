#include<iostream>
using namespace std;
class selectionsort
{
    private:
    int i,j,n,a[20],temp,max,min;
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
            min=a[i];
            max=i;
            for(j=i+1;j<n;j++)
            {
                if(min>a[j])
                {
                    min=a[j];
                    max=j;
                }
            }
            temp=a[i];
            a[i]=a[max];
            a[max]=temp;
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
    selectionsort b1;
    b1.getdata();
    b1.sort();
    b1.display();
    return 0;
}
