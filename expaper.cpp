#include<iostream>
using namespace std;

class A
{
    int x=4;
};
class B:public A
{
    int x=20;
    cout<<x;
};
