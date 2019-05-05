#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    int i;
    int d;
    int k=0;

    cout<<"elements in i are";
    for(i=0;i<size;i++)
    {

        cout<<arr[i]<<" "<<endl;
    }
    d=2;
    cout<<"elements transferred to D are " ;
    for(i=0; i<size ;i++)
    {
        if(arr[i]==d){
        while(i >= d)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        cout<<arr[i+1];
        i--;
    }

}
}
}
