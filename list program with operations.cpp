// Online C++ compiler to run C++ program online
#include <iostream>
#include<list>
using namespace std;
int main()
{
    list<int> list1={1,6,3,9,5};
    list<int> list2={2,5,8,9};
    //we use hear reverse,merge,front,back,insert,push_front,pop_back,remove,splice,unique,insert,clear//
    list1.sort();
    for(auto&elm:list1)
    cout<<elm<<" ";
    cout<<endl;
    return 0;
}