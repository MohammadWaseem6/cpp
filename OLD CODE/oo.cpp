#include <iostream>
using namespace std;
class Student {
    private:
    char name[30];
    long rollNo;
    char branch[30];

    public:
    void getStudent()
        {
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter rollno";
        cin>>rollNo;
        cout<<"Enter branch";
        cin>>branch;

    }

    void showStudent() {

        cout << "Name " << name << endl;
        cout << "Roll No " << rollNo << endl;
        cout << "Branch " << branch << endl;
    }

};
int main() {

    Student student[5];
    for (int i = 0; i <= 5; i++) {
        student[i].getStudent();
    }
     cout << "Student Details are" << endl;
    for (int i = 0; i <= 5; i++) {
        student[i].showStudent();
    }
 }
