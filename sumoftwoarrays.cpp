#include<iostream>
using namespace std ;
int main()
{
    int input1[]={6,2,4};
    int size1=3;
    int input2[]={7,5,6};
    int size2=3;
    int output[3];
    int sum=0,carry=0,j;
    if(size1>size2)
    {
        j=size1;
    }
    else
        j=size2;

        for(int i=size1-1,k=size2-1; j>=0;  i--,k--,j--)
        {
        if(i<0 && size2>size1)
        {
            sum=carry + input2[k];
        }
        else if(k<0 && size1 > size2)
        {
            sum=carry + input1[i];
        }
        else
            sum=carry + input1[i] + input2[k];

            carry=sum/10;
            output[j]=sum%10;
        }
        for(j=0 ; j < size1 ; j++)
        {
            cout<<output[j];
        }
}
