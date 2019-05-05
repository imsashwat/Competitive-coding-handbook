class fraction
{
    int num;
    int den;

    public :

    fraction ()
    {

    }

    fraction(int num,int den)
    {
        this->num = num;
        this->den = den;
    }

    int getNum const()
    {
        return num;
    }

    int getDen const()
    {
        return den;
    }

    void setNum(int n)
    {
        num = n;
    }

    void setDen(int d)
    {
        den = d;
    }

    void print()
    {
        cout<<num<<"/"<<den;
    }
};
