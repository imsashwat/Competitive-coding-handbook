#include<iostream>
using namespace std;
#include<cstring>

int length(char input[])
{
    int count=0;
    for(int i=0; input[i] != '\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[100];
    cout<<"enter your name :";
    cin.getline(name,300);
    cout<<name<<endl;
    int length = strlen(name) ;
    cout<<"length of sting is :" << length <<endl;
    cout<<"Now program to check palindrome : " <<endl;
    int i = 0 ;
    int j = length-1 ;
    for(i=0 ; i < length/2 ; i++)    //here i<l/2 is for comparisons made
    {
        if(name[i]!= name[j-i] )
          {
              cout<<"not palindrome"<<endl;
              break;
          }
    }
          if(i==length/2)
          {
           cout<<"palindrome"<<endl;
          }
        }




