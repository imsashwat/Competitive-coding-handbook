class fraction
{
    private :

        int numerator;
        int denominator;

    public :

        fraction(int numerator, int denominator)
        {
            this -> numerator = numerator;
            this -> denominator = denominator;
        }

    void print()
    {
        cout <<  this ->  numerator << "/" << denominator <<endl;
    }
    /*
    void operator+=(fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;

        simplify();
    }
    */
    fraction& operator+=(fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;

        simplify();

        return *this;
    }

    void simplify ()
    {
        int gcd = 1;
        int j=min(this -> numerator,this -> denominator);
        for (int i=1; i<=j ; i++)
        {
            if(this->numerator%i==0 && this->denominator%i==0)
            {
                gcd = i;
            }
        }
        this -> numerator = this->numerator/gcd;
        this -> denominator = this->denominator/gcd;
    }

    void multiply(fraction const &f2)
    {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;

        simplify();
    }

    //pre-increment
    fraction& operator++()
    {
        numerator = numerator + denominator;
        simplify();

        return *this;
    }

    fraction& operator++(int)
    {
        fraction fNew(numerator, denominator);
        numerator = numerator + denominator;
        simplify();
        fNew.simplify();
        return fNew;
    }
};
