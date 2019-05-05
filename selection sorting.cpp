#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int size;
    cin>>size;

    int min,loc,j,i,temp;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<(size-1);i++)
    {
        min=arr[i];
        loc=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]>min)
            {
                min=arr[j];
                loc=j;
            }
        }

        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
    int count = 0;
    for(i=0;i<size;i++){
        cout<<arr[1];
        count++;
        if (count==1){
            break ;
        }
    }

}
