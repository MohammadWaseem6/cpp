#include<iostream>
using namespace std;
class student
{
private:
    int rollno;
    string name;
    float marks;
    public:
    void get()
    {
cout<<"Enter Roll No: "<<endl;
cin>>rollno;
cout<<"Enter Name:"<<endl;
cin>>name;
cout<<"Enter Marks:"<<endl;
      cin >>marks;
    }
    void display()
    {
       cout<<"\nRoll No:" <<rollno<<endl;
       cout <<"\nName:" <<name<<endl;
       cout <<"\nMarks:"<<marks<<endl;
    }
};
    int main()
    {
        int find;
        student s1,s2;
        s1.get();
        s1.get();
        s1.get();
        cout<<endl;
        s1.display();
        s2.get();
        cout<<endl;
        s2.display();
        cout<<"Enter roll no to find the result of student"<<endl;
        cin>>find;
        return 0;
    }
