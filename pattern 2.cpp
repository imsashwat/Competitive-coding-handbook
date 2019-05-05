 #include<iostream>
using namespace std;

int main() {
    int n,cr,col;
    cin>>n;
    cr=1;
    while(cr<=n)
    {
        col=1;
        if(col<=cr)
        {
            cout<<cr;
            col=col+1 ;
        }
        else
        {
            cr=cr+1 ;

        }
    }
    cout<<endl;
}
