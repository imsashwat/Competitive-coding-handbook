#include<iostream>
using namespace std;
void compressString(char input1[])
{
    int count=1;
    char currChar=input1[0];
    int nextIndex=1;
    for(int i=1;input1[i]!='\0';i++)
    {
        if(input1[i]==currChar)
        {
            count++;
        }
        else if(count>1)
        {
            input1[nextIndex]=char(count+48);
            nextIndex++;
        }
        currChar=input1[i];
        input1[nextIndex]=input1[i];
        nextIndex++;
        count=1;
    }
    if(count>1)
    {
        input1[nextIndex]=char(count+48);
        nextIndex++;
    }
    input1[nextIndex++]='/0';
    cout<<input1;
}
int main()
{
    char input[] = "aaabbccdsa";
    char input[] = "aaabbccdsa";
    compressString(input);
}
