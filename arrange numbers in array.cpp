#include<iostream>
 using namespace std;

 int main()
 {
     int arr[100];
     int n;
     cin>>n;
    for(int j=0;j<n;j++)
    {
        if(n%2==0)
        {
            for(int i=1;i<n;i++)
            {
                arr[j]=i;
                i++;
                j++;
            }
            for(int i=n;i>1;i--)
            {
                arr[j]=i;
                i--;
                j++;
            }
            for(int i=    0;i<n;i++)
            {
                cout<<arr[i];
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
            for(int i=0;i<n;i++)
            {
                cout<<arr[i];
            }
        }
    }
 }
