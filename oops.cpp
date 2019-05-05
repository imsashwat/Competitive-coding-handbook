#include<iostream>
using namespace std;
#include "student.cpp"
//meri student.cpp file ka sara code yaha pklace ho gaya mtlb poori class , age ,roll no.

int main()
{
    //create objects statically
    student s1;
    student s2;

    student s3 , s4,s5;
    s1.age = 24;
    s1.rollNumber=244;
    cout<<s1.age<<endl;
    cout<<s1.rollNumber<<endl;

    s1.display();
    s2.display();
     //create objects dynamically
     student *s6 = new student;
    (*s6).age=24;
    (*s6).rollNumber=50;

    s6->age=34;
    s6->rollNumber=50;
    cout<<s6->age;
}
