
int binarysearch(int*input,int num,int val)
{
    int s=0 ;
    int e=n-1;
    int mid=s;
    while(s<=e)
    {
        mid=s + (s-e)/2;
        if (input[mid]>val){
            e=mid-1;

        }
        else if(input[mid]<val)
        {
            s=mid+1;
        }
        else
            return mid ;
    }
    return -1
}
