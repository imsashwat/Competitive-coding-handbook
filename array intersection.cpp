#include<iostream>
	using namespace std;

	void intersection(int input1[], int input2[], int size1, int size2)
	{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */

	int i ;
	int j ;
	for(i=0;i<size1;i++)
		{
			cin>>input1[i];
		}
	for(j=0;j<size2;j++)
		{
			cin>>input2[j];
		}

	for(i=0 ; i<size1 ; i++)
	{
 	for(j=0;j<size2;j++)
	{
      if(input1[i]==input2[j])
      {
       cout<<input1[i]<<endl;
        input2[j]= -1 ;
        break ;
	  }
	}
	}
    }

	int main()
	{
		int arr1[100];
		int size1=6;

		int arr2[100];
		int size2=4;

		intersection(arr1,arr2,size1,size2);
	}
