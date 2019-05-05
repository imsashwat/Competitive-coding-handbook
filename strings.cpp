#include<iostream>
using namespace std;
int main()
{
    char input[100];
    //cin>>input;
    cin.getline(input,10,'i');  //here 'i' work as a delimiter
    cout<<input<<endl;
}
