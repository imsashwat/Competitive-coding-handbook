class student
{
    public :

    int rollNumber;

    private :

    int age;

    public :

    //Default constructor
    student(){
       cout<<"constructor called"<<endl;
    }
    student(int r)
    {
        cout<<"cons2 called";
        rollNumber=r;
    }
    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }

};
