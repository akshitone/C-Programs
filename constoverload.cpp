#include<iostream>
using namespace std;

class Emp
{
    int res,res2;
public:
    Emp(int r,int v)
    {
        res=3.14*r*r;
        cout<<"Area of circle:"<<res;
    }
    Emp(int s)
    {
        res=s*s;
        cout<<"Area of Square:"<<res;
    }
};
int main()
{
    Emp e1(5);
    Emp e2(20,12);
    return 0;
}
