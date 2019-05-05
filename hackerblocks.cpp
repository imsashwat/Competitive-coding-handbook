#include<iostream>
using namespace std;
int changePi(char a[],int i,char b[],int j){

if(a[i]=='\0'){
        b[j]=a[i];
for(int k=0;b[k]!='\0';k++){
    cout<<b;
    }
    return 0;
}

else if(a[i]=='p' && a[i+1]=='i'){
b[j]='3';
b[j+1]='.';
b[j+2]='1';
b[j+3]='4';
changePi(a,i+2,b,j+4);
}
else{
    b[j]=a[i];
    changePi(a,i+1,b,j+1);
}
}

int main(){
char a[200];
char b[100];
cin.getline(a,100);
changePi(a,0,b,0);
}
