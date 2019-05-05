#include <iostream>
using namespace std;

class student
{
    int rollNumber;

    public :

    int age ;

    student(int r)
    {
        rollNumber = r;
    }

    int getRollNumber() const
    {
        return rollNumber;
    }
};

int main()
{
    student s1(101);
    s1.age=20;

    student const s2=s1;
    cout<<s2.getRollNumber();
}
