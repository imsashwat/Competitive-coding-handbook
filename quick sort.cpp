#include<iostream>
using namespace std;
int partition(int *arr,int si,int ei)
{
    int pivot = arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(arr[i]<=pivot)
        {
        count++;
        }
    }
    int pivotindex = count+si;
    arr[si]=arr[pivotindex];
    arr[pivotindex]=pivot;
    int i=si;
    int j=ei;
    while(i<pivotindex && j>pivotindex)
    {
        if(arr[i]<=pivot)
        {
            i++;
        }
        else if(arr[j]>pivot)
        {
            j--;
        }
        else
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    return pivotindex;
}
void quickSort(int *arr,int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
   int p = partition(arr,si,ei);
   quickSort(arr,si,p-1);
   quickSort(arr,p+1,ei);
}
int main()
{
    int arr[]={5,8,7,2,3,1,9};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

}
