#include<iostream>
using namespace std;

class student
{
int acc;
char name;
float balance;
public:
void getdata();//Declaration of function
void putdata();//Declaration of function
};
void student::getdata(){//Defining of function
cout<<"Enter acc: ";
cin>>acc;
cout<<"Enter Name : ";
cin>>name;
cout<<"enter balance:";
cin>>balance;
}
void student::putdata(){//Defining of function
cout<<acc<<" ";
cout<<name<<" ";
cout<<balance<<" ";
cout<<endl;
}
int main(){
blank b1; //One member
b1.getdata();//Accessing the function
b1.putdata();//Accessing the function
return 0;
}
