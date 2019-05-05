class complex
{
    private :

    int real;
    int imaginary;

    public :

    complex (int real, int imaginary)
    {
        this -> real = real;
        this -> imaginary = imaginary;
    }

    void print()
    {
        cout << this->real << "+" << this->imaginary <<"i";
    }

    void add(complex c2)
    {
        int x = real + c2.real;
        int y = imaginary + c2.imaginary;

        real = x;
        imaginary = y;
    }

    void multiply(complex c2)
    {
        int x = real*c2.real - imaginary*c2.imaginary;
        int y = real*c2.imaginary + imaginary*c2.real;

        real = x;
        imaginary = y;
    }
};
