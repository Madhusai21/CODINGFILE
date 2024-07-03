// Online C++ compiler to run C++ program online
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("afile data");
    cout<<"wrting to the file"<<endl;
    cout <<"enter your name"<<endl;
    cin.getline(data,100);
    outfile<<data<<endl;
    cout<<"enter the age"<<endl;
    cin>>data;
    outfile<<data<<endl;
    outfile.close();
    ifstream infile;
    infile.open("afile data");
    cout<<"reading to the file"<<endl;
    infile>>data;
    cout<<data<<endl;
    cout<<data<<endl;
    infile>>data;
    infile.close();
    return 0;
}