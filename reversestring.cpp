#include <iostream>
using namespace std;
#include<cstring>

void reverseString(char input[]) {
	int len = strlen(input);
	int i = 0, j = len - 1;
	while(i < j) {
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}
	i=len-1 ;
	j=0 ;
	while(i<j)
    {
        char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
    }
}

int main() {
	char input[100];
	//cin >> input;
	cin.getline(input, 100);
	cout<<"input is:"<<input<<endl;
	reverseString(input);
	cout << input << endl;
}
