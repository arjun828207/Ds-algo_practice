#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool genders;
    void display()
    {
        cout<<"name :"<<name<<endl;
        cout<<"genders :"<<genders<<endl;
        cout<<"age :"<<age<<endl;
    
    }
};
int main()
{
    student arr[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter name:";
        cin>>arr[i].name;
        cout<<"Enter age:";
        cin>>arr[i].age;
        cout<<"Enter genders:";
        cin>>arr[i].genders;

    }
    for(int i=0; i<3;i++)
    {
        arr[i].display();
    }
}