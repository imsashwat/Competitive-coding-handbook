#include<iostream>
#include<cstring>
using namespace std;
void reverseWords(char input[],int start,int end)
{
    while(start<end)
    {
        char temp=input[start];
        input[start]=input[end];
        input[end] = temp;
        start++;
        end--;
    }
}
void reverseStringWords(char input[])
{
    int len=strlen(input);
    int i=0,j=len-1;
    while(i<j)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    int start=0,end=0;
    for(i=0;i<len;i++)
    {
        if(input[i]==' ')
        {
            end = i-1;
            reverseWords(input,start,end);
            start = i+1;
            end = i+1;
        }
    }
    end=i-1;
    reverseWords(input,start,end);
}
int main()
{
    char input[100];
    cin.getline(input,100);
    reverseStringWords(input);
    cout<<input<<endl;
}
