#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[]="aaabbccdsa";
    char item;
    char output[100];
    int count=1;
    int len=strlen(arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        item=arr[i];
        if(item==arr[i+1])
        {
            count++;
        }
        else
        {
            cout<<count;
            item=arr[i+1];
            count=1;
        }
    }

}
