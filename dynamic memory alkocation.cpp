#include<iostream>
using namespace std;
int main()

{
    /*
    //making dynamic array
    int n;
    cin>>n;
    int* p;
    p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    delete []p;
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<"  ";
    }
    */
    int m,n;
    cin>>m>>n;
    int** p = new int*[m];
    for(int i=0;i<m;i++)
    {
        p[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>p[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j];
        }
        cout<<endl<<"  ";
    }
}


