#include<iostream>
using namespace std;

void arrange(int arr[],int n){

  /* Don't write main().
     Don't read input, it is passed as function argument.
     Arrange elements in the array "arr" given as input.
     Taking input and printing output is handled automatically.
  */
for(int j=0;j<n;j++)
{

if(n%2==0)
{
  for(int i=1;i<n;i=i+2)
  {
    arr[j]=i;
    j++;
  }
  for(int i=n;i>1;i--)
  {
    arr[j]=i;
    i--;
    j++;
  }
}


else if(n%2==1)
{
  for(int i=1;i<=n;i++)
  {
    arr[j]=i;
    i++;
    j++;
  }
  for(int i=n-1;i>1;i--)
  {
    arr[j]=i;
    i--;
    j++;
  }
}
}
}

int main()
{
    int arr[10];
    int n;
    cin>>n;
    arrange(arr,n);
}

