#include<iostream>
using  namespace std;



int main(){

int n;
cin>>n;
int d;
int a[20];
int i=0,j;

while (n>0)
{
    d=n%10;
    if(9-d>d){
        a[i]=d;
    }
    else{
        a[i]=9-d;
    }
    i++;

    n=n/10;
    
    
    
}

if(a[i-1]==0){
    cout<<9;
    i--;
}

for(j=i-1;j>=0;j--){
    cout<<a[j];
    
}



    return 0;

}