#include<iostream>
using namespace std;
class line
{
    public:
    inline int add(int a,int b)
    {
        return(a+b);
    }
    inline int sub(int a,int b)
    {
        return(a-b);
    }
    inline int mul(int a,int b)
    {
        return(a*b);
    }
    inline int div(int a,int b)
    {
        return(a/b);
    }
    inline int mod(int a,int b)
    {
        return(a%b);
    }
};
int main()
{
    line m1;
    int val1,val2;
    cout<<"enter the  two  values:"<<endl;
    cin>>val1>>val2;
    cout<<"\naddition value :"<<m1.add(val1,val2);
    cout<<"\nsubtraction value :"<<m1.sub(val1,val2);
    cout<<"\nmultiplication value:"<<m1.mul(val1,val2);
    cout<<"\ndivision value:"<< m1.div(val1,val2);
    cout<<"\nmodulus value:"<<m1.mod(val1,val2);
    return 0;
}



    
    
        
