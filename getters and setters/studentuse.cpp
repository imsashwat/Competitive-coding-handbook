class student
{
    public:
    int rn;

    private:
    int age;

    public:
    void display(){
    cout<<age<<" "<<rn<<endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int a)
    {
        age = a;
    }
};
