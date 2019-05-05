#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[]="aabccbaa";
    int len=strlen(arr);
    char output[20];
    int j=0;
    cout<<len;
    for(int i=0; arr[i]!= '\0';i++)
    {
        if(arr[i]!=arr[i+1])
        {
            output[j]=arr[i];
            j++;
            i++;
        }
        else
        {
            output[j]=arr[i];
            i=i+2;
            j++;
        }
    }
    output[j+1]='\0';
    cout<<output;
}
