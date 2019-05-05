#include<iostream>
using namespace std;
#include "student.cpp"

int main()
{

    student s1;
    s1.display();

    student s2;

    student *s3=new student;
    s3->display();

    cout<<"parameterized constructors demo"<<endl;
    student s4(10);
    s4.display();

    student *s5 = new student(101);
    s5 -> display();

    student s6(10,40); //yaha pe double value wala call hoga
    s6.display();
}
