//Constructor outside a calss
#include<iostream>
using namespace std;
class Student
{
    int roll_no;
    char name[50];
    float fee;

    public: 
    Student();
    void display();
};

Student::Student()
{
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter roll number:"<<endl;
    cin>>roll_no;
    cout<<"Enter fees:"<<endl;
    cin>>fee;
}

void Student::display()
{
    cout<<"\nDisplaying Data:"<<endl;
    cout<<roll_no<<endl<<name<<endl<<fee<<endl;
}

int main()
{
    Student s1;
    s1.display();
    return 0;
}

/*
OUTPUT: 
Enter name:
Jiya
Enter roll number:
70
Enter fees:
3500

Displaying Data:
70
Jiya
3500
*/
