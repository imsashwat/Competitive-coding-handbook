#include <iostream>
using namespace std;

void findIndexes(int input[],int currIndex,int size,int x,int output[],int &k)
{
    if(currIndex == size)
    {
        return ;
    }
    else if(input[currIndex] == x)
    {
        output[k] = currIndex;
        k++;
    }
    else
    {
        findIndexes(input,currIndex+1,size,x,output,k);
    }
}

int allIndexes(int input[],int size,int x,int output[])
{
    int k = 0;
    findIndexes(input,0,size,x,output,k);
    cout<<k<<endl;
    return k ;
}

int main()
{
    int input[5] = {9,8,10,8,8};
    int size = 5;
    int output[10];
    int x = 8;
    int d = allIndexes(input,size,x,output);
    for(int i=0; i<d ; i++)
    {
        cout<<output[i]<<" ";
    }
}
