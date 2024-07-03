// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class person
{
    private:
    int age;
    public:
    person() //no arguments
    {
        age=20;
    }
    person(int a)
    {
        age=a;
    }
    void display()
    {
        return age;
    }
};
int main()
{
    person person1,person2(45);
    cout<<"\n person1 age is:"<<person1.getage();
    cout<<"\n person2 age is:"<<person2.getage();
    return 0;
}

