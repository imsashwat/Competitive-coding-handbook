#include<iostream>
using namespace std ;
void wavePrint(int arr[][100],int m , int n)
{
    int k,j;
    int i = 0 ;
    for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            cout<<arr[i][j]<<"  " ;
            if(j%2==0)
            {
                i++ ;
            }
            else
            {
                i--;
            }
        }
         if(j%2==0)
            {
                i-- ;
            }
            else
            {
                i++;
            }
    }
}
int main()
{
    int a[100][100];
    int m,n;
    cin>>m>>n;
    for(int i=0 ; i<m ;i++ )
    {
        for(int j=0 ; j<n ;j++)
        {
            cin>>a[i][j];
        }
    }
        wavePrint(a,m,n);
}
