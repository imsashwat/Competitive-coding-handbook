#include<iostream>
using namespace std;
bool checkpalindromehelper(char input[],int size)
{
    if(size==0 || size ==1)
    {
        return true;
    }

    //input[0]=r a c  != input[size-1]= r a c 0
    //[r,a,c,e,c,a,r]
    //[a,c,e,c,a]
    //[c,e,c]

    if(input[0] != input[size-1])
    {
        return false;
    }
    else
        return checkpalindromehelper(input+1,size-2);
}
bool checkPalindrome(char arr[])
{
    int len=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        len++;
    }
    cout<<len<<endl;
    return checkpalindromehelper(arr,len);
}
int main()
{
    char arr[]={"racecar"};
    bool d = checkPalindrome(arr);
    cout<<d;
}
