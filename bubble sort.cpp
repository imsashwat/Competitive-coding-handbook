void BubbleSort(int arr[], int n){

    int j=0 ;
    while(j<n)
    {
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int z=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=z;
            }
        }
                j++  ;
    }
}
