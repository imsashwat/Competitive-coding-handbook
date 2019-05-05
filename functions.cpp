#include<iostream>
using namespace std ;

void printTable(int start, int end, int step) {
  	while(start<=end)
    {
        start=0;
        int celsius=(start-32)*5/9 ;
        cout<<start<<" ";
        start=start+step ;
        cout<<celsius<<endl;
    }
}




