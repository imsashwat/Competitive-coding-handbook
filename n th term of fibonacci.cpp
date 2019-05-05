    #include<iostream>
    using namespace std;
    int main()
    {
        int n,a,b,sum,count;
        a=0;
        b=1;
        sum=a+b;
        count=2;
        cin>>n;

            while(count<=n)
            {

            sum=a+b;
            if(count==n)
            {
                break;
            }

            a=b;
            b=sum;
            count=count+1;
            }
            cout<<sum;


    }



