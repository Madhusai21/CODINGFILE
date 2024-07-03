// Online C++ compiler to run C++ program online
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    char name[10],branch[10];
    int age;
    ofstream outfile;
    outfile.open("a file data");
    cout<<"enter the name of empolyee:"<<endl;
    cin>>name;
    cout<<"enter the age of employee:"<<endl;
    cin>>age;
    cout<<"enter the branch of empolyeee:"<<endl;
    cin>>branch;
    outfile<<name;
    outfile<<age;
    outfile<<branch;
    outfile.close();
    ifstream infile;
    infile.open("a file data");
    cout<<"reading the employee details"<<endl;
    cout<<name<<endl;
    infile>>name;
    cout<<age<<endl;
    infile>>age;
    cout<<branch<<endl;
    infile>>branch;
    infile.close();
    return 0;
}
    
    