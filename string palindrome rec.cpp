#include <iostream>
using namespace std;
#include <cstring>
bool palindrome(char input[],int start,int end)
{
        if(input[0] =='\0' || input[1] == '\0')
        {
            return true;
        }
        if(start >= end)
        {
            return true;
        }
        else if(input[start] == input[end])
        {
            cout<<input[start] <<"   " << input[end] << endl;
            return palindrome(input,start+1,end-1);

        }
        else
        {
            return false;
        }

}

bool palindrome(char input[])
{
    int len = strlen(input);
    return palindrome(input,0,len-1);
}

int main()
{
    char* str = new char[10];
    str = "racecar";

    bool g = palindrome(str);
    cout<<g<<endl;
}
