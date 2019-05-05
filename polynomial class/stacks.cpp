class Stacks
{
    int *data;
    int nextIndex;
    int capacity;

    public :

    Stacks()
    {
        data = new int[4];
        capacity = 4;
        nextIndex=0;
    }

    // return the number of elements present

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    // insert element

    void push(int element)
    {
        if(nextIndex == capacity)
        {
            /*
            cout<<"stack is full"<<endl;
            return ;
            */
            int *newData = new int[2*capacity];
            for(int i=0; i<capacity ;i++)
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


    //delete element

    int pop()
    {
        if(isEmpty())
        {
            cout<< "stack is empty" <<endl;
            return INT_MIN;
        }

        nextIndex--;
        return data[nextIndex];
    }

    //access top element

    int top()
    {
        return data[nextIndex-1];

         if(isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
    }
};
