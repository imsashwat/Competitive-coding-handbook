class student
{
    public :

    int rn;

    private :

    int age;

    public:

    //default constructor

    student()
    {
        cout<<"constructor called !   "<<endl;
    }


    //parameterized constructor
    student(int rn)
    {
        cout<<"constructor 2 called! XXX  "<<endl;
        this->rn=rn;
    }
    student(int a,int r)
    {
        cout<<"this : "<<this<<endl;
        cout<<"constructor 3 called : "<<endl;
        age=a;
        rn=r;
    }
    void display()
    {
        cout<<"age  "<<age<<"   "<<"rn   "<<rn<<endl;
    }
};
