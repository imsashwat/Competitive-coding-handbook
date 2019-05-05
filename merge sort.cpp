#include<iostream>
using namespace std;
void merge(int a[],int si,int ei)
{
    int size=ei-si+1;
    int mid =(si+ei)/2;
    int *out = new int[size];
    int i = si;
    int j = mid+1;
    int k = 0;
    while(i<=mid && j<=ei)
    {
        if(a[i]<a[j])
        {
            out[k]=a[i];
            i++;
            k++;
        }
        else
        {
            out[k]=a[j];
            j++;
            k++;
        }
    }
        while(i<=mid)
        {
            out[k]=a[i];
            k++;
            i++;
        }
        while(j<ei)
        {
            out[k]=a[j];
            k++;
            j++;
        }
        int n=0;
        for(int m=si;m<=ei;m++)
        {
            a[m]=out[n];
            n++;
        }
        delete [] out;
}
void mergeSort(int a[],int si,int ei)
{
    if(si>=ei)
    {
        return ;
    }
    int mid=(si+ei)/2;
    cout<<si<<ei<<"  ";
    mergeSort(a,si,mid);

    mergeSort(a,mid+1,ei);

    merge(a,si,ei);
}
int main()
{
    int a[]={6,5,4,3,2,1};
    mergeSort(a,0,5);
    for(int i=0 ;i<6;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
