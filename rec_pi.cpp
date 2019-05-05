#include <iostream>
#include <cstring>
using namespace std;

// Change in the given string itself. So no need to return or print anything
int length(char input[])
{
    int len=0;
    for(int i=0 ; input[i] != '\0' ; i++)
    {
        len++;
    }
    return len;

}

void replacePi(char input[],int start)
{
    if(input[start]=='\0' || input[start+1]=='\0')
    {
        return;
    }
    else
    {
        replacePi(input,start+1);
        if(input[start]=='p' && input[start+1] == 'i')
        {
            int len = length(input);
            input[len+2]='\0';
            int x = length(input);
            cout<<"this -> "<<x<<endl;
            for(int i = len-1; i>=start+2 ; i--)
            {
                input[i+2] = input[i];
            }
            input[start] = '3';
            input[start+1] = '.';
            input[start+2] = '1';
            input[start+3] = '4';
        }
    }
}
void replacePi(char input[]) {
	// Write your code here
    replacePi(input,0);
}
int main()
{
    char input[] = {"xpix"};
    int len = length(input);
    cout<<"initial  ->"<<len<<endl;
    replacePi(input);
    int x = length(input);
    cout<<"Final ->"<<x<<endl;
    for(int i =0 ; input[i] != '\0' ;i++)
    {
        cout<<input[i];
    }
}
