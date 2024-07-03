// Online C++ compiler to run C++ program online
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    ofstream outfile;
    outfile.open("a file data");
    cout<<"enter the a,b values:"<<endl;
    cin>>a>>b;
    outfile<<a<<b;
    outfile.close();
    ifstream infile;
    infile.open("a file data");
    cout<<a<<" "<<b<<endl;
    infile>>a>>b;
    c=a+b;
    cout<<c<<endl;
    infile>>c;
    infile.close();
    return 0;
}

    