#include<iostream>
using namespace std ;
void findLargest(int arr[][100], int m, int n){
    int maxSum = INT_MIN ,i ,j;
    int index = i ;
    bool isRow = true;
    for(i=0;i<m;i++)
    {
        int rowSum=0;
        for(j=0;j<n;j++)
        {
            rowSum+=arr[i][j];
        }
        if(rowSum>maxSum)
        {
            maxSum = rowSum;
            index = i;
        }
    }
    for(j=0;j<n;j++)
    {
        int colSum=0;
        for(i=0;i<m;i++)
        {
            colSum+=arr[i][j];
        }
        if(colSum>maxSum)
        {
            isRow=false;
            maxSum=colSum;
            index = j;
        }
    }
    if(isRow)
    {
        cout<< " row" <<"  "<<index;
    }
    else
    {
        cout<<"column"<<" "<<index;
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
        findLargest(a,m,n);
}


