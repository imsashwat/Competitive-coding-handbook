#include<iostream>
#include<cstring>
using namespace std;
void rotateString(char input[],int val)
{
    int len=strlen(input);
    for(int i=len-1;i>=val;i--)
    {
    char temp = input[i];
    for(int j=0;j<len;j++)
    {
    input[j+1]=input[j];
    }
    input[0]=temp;
    }


}
int main()
{
    char input[100];
    cin.getline(input,100);
    int val;
    cin>>val;
    rotateString(input,val);
    cout<<input<<endl;
}
