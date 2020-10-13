#include<iostream>
using namespace std;

class Person
{
    char name[20];
public:
    int age;
    virtual void acceptDetails()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
    virtual void displayDetails()
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
    int i;
    Person person[20];
    Patient patient;
    for(i=0;i<3;i++)
    {
        person[i].acceptDetails();
    }
    for(i=0;i<3;i++)
    {
        person[i].displayDetails();
    }
    int maxi=person[0].age;
    for(i=0;i<3;i++)
    {
        if(maxi<person[i].age)
        {
            maxi=person[i].age;
        }
    }
    cout<<"Max Age: "<<maxi<<endl;
    Person &personref=patient;
    personref.acceptDetails();
    /* Person *ptr;
    Person person;
    Patient patient;
    ptr=&person;
    ptr->acceptDetails();
    ptr=&patient;
    ptr->acceptDetails(); */
    return 0;
}

