#include<iostream>
using namespace std ;

class student
{

    public :
    int age ;
    int rollNumber ;
    void print()
    {
        cout<<age<<" "<<rollNumber<<endl;
    }

};
int main()
{
     student s1 ;
     student s2 ;
     student s3 ;

    *s1.age=20 ;
    *s1.rollNumber=101 ;

    *s2.age=21 ;
    *s2.rollNumber=102 ;

    *s3.age=32 ;
    *s3.rollNumber=105 ;

    s1.print() ;
    s2.print() ;
    s3.print();

}
