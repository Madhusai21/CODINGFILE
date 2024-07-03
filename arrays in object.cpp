
#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[30];
    string branch;
    public:
    void getdata()
    {
        cout<<"enter the roll: ";
        cin>>roll;
        cout<<"enter the name: ";
        cin>>name;
        cout<<"enter the branch:";
        cin>>branch;
    }
    void display()
    {
        cout<<roll<<" ";
        cout<<name<<" ";
        cout<<branch<<" ";
        cout<<endl;
    }
};
int main()
{
    student s1[20];
    int n,i;
    cout<<"enter the number of student:";
    cin>>n;
    for(i=0;i<n;i++)
    s1[i].getdata();
    cout<<"student data"<<endl;
    for(i=0;i<n;i++)
    s1[i].display();
}

    
    
