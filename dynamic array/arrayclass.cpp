class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity;

    public :

    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(DynamicArray const &k)
    {
        //this -> data = d.data;
        //Deep Copy
        this -> data = new int[k.capacity];
        for(int i = 0; i<k.nextIndex; i++)
        {
            this-> data[i] = k.data[i];
        }

        this -> nextIndex = k.nextIndex;
        this -> capacity = k.capacity;
    }

    void operator=(DynamicArray const &k)
    {
        //this -> data = d.data;
        //Deep Copy
      this -> data = new int[k.capacity];
        for(int i = 0; i<k.nextIndex; i++)
        {
            this-> data[i] = k.data[i];
        }

        this -> nextIndex = k.nextIndex;
        this -> capacity = k.capacity;
        this -> capacity = k.capacity;
    }
    void add(int element)
    {
        if(nextIndex == capacity)
        {
            int *newData = new int[2*capacity];
            for(int i=0 ; i<capacity ;i++)
            {
                newData[i] = data[i];
            }
            delete []data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i)
    {
        if(i<nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }

    void add (int i, int element)
    {
        if(i < nextIndex)
        {
            data[i] = element;
        }

        else if(i == nextIndex)
        {
            add(element);
        }
        else
        {
            return ;
        }
    }

    void print()
    {
        cout<<this<<"  ";
        for(int i=0; i<nextIndex;i++)
        {
            cout<<data[i]<<"   ";
        }
        cout<<endl;
    }
};