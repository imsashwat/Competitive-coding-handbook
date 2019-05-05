#include <iostream>
using namespace std;
#include "studentuse.cpp"

int main()
{
    student s1;
    student *s2=new student;
    s1.setAge(20);
    s2-> setAge(24);

    s1.display();
    s2->display();
    //creating objects statically
    /*student s1,s2;
    //s1.age=24;
    s1.rn=50;
    cout<<s1.getAge()<<" S1 age"<<endl;
     //cout<<s1.rn<<endl;
    s1.display();
    s2.display();

    //creating objects dynamically

    student *s6 = new student;
    //s6->age=244;
    s6->rn=23234;
    cout<<s6->getAge()<<"S6 AGE";
    s6->display();
    */
}
