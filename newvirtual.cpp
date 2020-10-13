#include<iostream>
using namespace std;

class Emp
{
        int id;
    public:
        virtual void getdata()
        {
            cout<<"base";
            cin>>id;
            putdata();
        }
        virtual void putdata()
        {
            cout<<endl<<id;
        }
};
class Student
{
    int a,b;
    char name[20];
public:
    void getdata()
    {
        cin>>name>>a>>b;
        putdata();
    }
    void putdata()
    {
        cout<<endl<<name;
        calculate();
    }
    void calculate()
    {
        cout<<endl<<a*b;
    }
};
int main()
{
    Emp e;
    Student stu;
    e.getdata();
    Emp &emp=stu;
    emp.getdata();
    /*Person person;
    Patient patient;
    person.acceptDetails();
    Person &personref=patient;
    personref.acceptDetails();*/
}
