class student
{
    public :

        int bhabhi;
        const int rollNumber;
        int &x;

        student(int r, int age) : rollNumber(r), bhabhi(age), x(this -> rollNumber)
        {

            cout<< &x<<"  "<<bhabhi;

        }

        student(int r, int age) : rollNumber(r), bhabhi(age), x(this -> bhabhi)
        {

            cout<< &x<<"  "<<bhabhi;

        }
};
