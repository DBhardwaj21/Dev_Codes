#include<iostream>
using  namespace std;



int main(){

    int t;
    cin>>t;
    int cnt=0;
    while (t--)
    {
        int s1, s2, s3;
        cin>>s1>>s2>>s3;
        if(s1+s2+s3>=2){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;

}