    #include<iostream>
	using namespace std;

            int arrangeNumbers(int arr[100], int size)
            {
			int i=0 , j=size-1;
			int num = 1;
			while(i<j)
			{
				arr[i]=num;
				num++ ;
				i++;
				arr[j]=num;
				num++ ;
				j--   ;
			}
			if(i==j)
			{
			   arr[i] = num;
			}
			for(i=0;i<size;i++)
            {
                cout<<arr[i];
            }
            }
		int main()
		{
		    int arr[100] ;
		    int size;
		    cin>>size;
		   int x = arrangeNumbers(arr,size);
		   cout<<x;
		}

