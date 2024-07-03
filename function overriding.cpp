#include <iostream>
using namespace std;
class memo
{
    public:
    void show()
    {
        cout<<"enter the memo"<<endl;
    }
};
class robo:public memo
{
    public:
    void show()
    {
        cout<<"enter the robo"<<endl;
        memo::show();
    }
};
int main()
{
    robo r1;
    r1.show();
    return 0;
}