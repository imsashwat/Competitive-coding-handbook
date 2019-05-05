# include<iostream>
using namespace std;
#include "inbuilt.cpp"
int main()
{

    //COPY ASSIGNMENT
    student s1(10,100);
    student s2(20,200);

    student *s3= new student(30,3001);
    s3->display();
    s2=s1;
    *s3=s1;
    s3->display();
    s2=*s3;
    s2.display();
    s3->display();
    delete s3;
    /*
     copy constructor

    student s1(10,100);
    cout<<"s1:";
    s1.display();

    student s2(s1);
    cout<<"s2:";
    s2.display();

    student *s3 = new student(20,200);
    student s4(*s3);

    student *s5= new student(*s3);
    student *s6= new student(*s3);
    s5->display();
    */

}
