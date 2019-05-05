#include <iostream>
using namespace std;

void trimSpaces(char input[])
{
    int i=0,j=0;
    while(input[i] != '\0')
    {
        if(input[i] != ' ')
        {
            input[j]=input[i];
            j++ ;
        }
        i++ ;
    }
    input[j]='\0';
    cout<<input;
}
int main() {
	char input[100];
	cin.getline(input, 100);
	cout<<"U HAVE TYPED->"<<input<<endl;
	trimSpaces(input);
}
