#include<iostream>
using namespace std;

class Person
{
    char name[20];
    int age;
public:
    void acceptDetails()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void displayDetails()
    {
        cout<<name<<"\t"<<age<<endl;
    }
};
class Patient:public Person
{
    int days,rate,bill,total;
public:
    void acceptDetails()
    {
        Person::acceptDetails();
        cout<<"Enter No of Days: ";
        cin>>days;
        cout<<"Enter Rate: ";
        cin>>rate;
        cout<<"Enter Bill: ";
        cin>>bill;
        displayDetails();
    }
    void displayDetails()
    {
        Person::displayDetails();
        cout<<days<<"\t"<<rate<<"\t"<<bill<<endl;
        calculateBill();
    }
    void calculateBill()
    {
        total = bill + (days * rate);
        cout<<total;
    }
};
int main()
{
    Patient p;
    p.acceptDetails();
}
