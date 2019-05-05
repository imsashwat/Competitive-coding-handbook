class Polynomial {
    int *degCoeff;      // Name of your array (Don't change this)
    int capacity;
    int nextIndex;
    // Complete the class
  	public :

  	Polynomial()
    {
       degCoeff = new int[4];
       capacity = 4;

       for(int i=0; i<capacity; i++)
       {
           degCoeff[i]=0;
       }
    }
    //COPY CONSTRUCTOR
    Polynomial(Polynomial const &d)
    {
        //DEEP COPY
        this -> degCoeff = new int[d.capacity];
        for(int i=0; i<d.nextIndex ; i++ )
        {
            this->degCoeff[i] = d.degCoeff[i];
        }
        this -> nextIndex = d.nextIndex;
        this -> capacity = d.capacity;
    }
    //COPY ASSIGNMENT OPERATOR
    void operator=(Polynomial const &d)
    {
        this -> degCoeff = new int[d.capacity];
        for(int i=0; i<d.nextIndex ; i++ )
        {
            this->degCoeff[i] = d.degCoeff[i];
        }
        this -> nextIndex = d.nextIndex;
        this -> capacity = d.capacity;
    }
    //print
    void print() const
    {
        for(int i=0; i<capacity; i++)
        {
            cout<<degCoeff[i]<<"x"<<i<<"   ";
        }
        cout<<endl;
    }
    //setCoefficient
    void setCoefficient(int i,int element)
    {
        if(i >= capacity)
        {
            int *newdegCoeff = new int[2*capacity];
            for(int i=0; i<capacity; i++)
            {
                newdegCoeff[i] = degCoeff[i];
            }
            delete []degCoeff;
            degCoeff = newdegCoeff;
            capacity *= 2;
        }
         degCoeff[i] = element;
    }

    Polynomial operator+(Polynomial const &p)
    {
        Polynomial pNew;
         int i,j=0;
         while(i<this->capacity && j<p.capacity)
         {
             int deg =i;
             int coeff = this->degCoeff[i] + p.degCoeff[j];
             pNew.setCoefficient(deg, coeff);
             i++;
             j++;
         }
         while(i<capacity)
         {
             pNew.setCoefficient(i, degCoeff[i]);
             i++;
         }
          while(j<capacity)
         {
             pNew.setCoefficient(j, degCoeff[j]);
             j++;
         }
             return pNew;
    }
};
