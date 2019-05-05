#include<iostream>
using namespace std;
#include<math.h>
voidmaxPathSum(int ar1[], int ar2[], int m, int n)
{
   int i = 0, j = 0;

    // Initialize result and current sum through ar1[] and ar2[].
    int  result = 0, sum1 = 0, sum2 = 0;

    // Below 3 loops are similar to merge in merge sort
    //as soon as J apna poora array travel krlega to ye wala while khatam ho jaega or jo doosra while vo kaaam krega

    while (i < m && j < n)
    {
        if(ar1[i]<ar2[j])
        {
            sum1 += arr2[i++];
        }
        else if(ar1[i]>ar2[j])
        {
            sum2 += ar2[j++];
        }
        else
        {
            result =result + max(sum1,sum2) ;
            sum1=0;
            sum2=0;
            while(i<m && j<n && ar1[i]==ar2[j])
            {
                result= result+ar1[i++];
                j++;
            }
        }
    }
   while (i < m)
   {
        sum1  +=  ar1[i++];
   }
    // Add remaining elements of ar2[]
    while (j < n)
    {
        sum2 +=  ar2[j++];
    }
    // Add maximum of two sums of remaining elements
    result +=  max(sum1, sum2);

    return result;
}

int main()
{
    int ar1[]  ={1,5,10,15,20,25};
    int ar2[] =  {2,4,5,9,15};
    int m = 6 ;
    int n = 5;

    maxPathSum(ar1, ar2, m, n);
    return 0;
}
