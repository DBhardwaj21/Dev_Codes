#include<iostream>
#include<vector>
using  namespace std;



int main(){
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    vector<int> arr;
    int power=1;
    while (n>0)
    {
        int d=n%10;
        if(d>0)
            arr.push_back(d*power);
        n/=10;
        power*=10;
        }
        cout<<arr.size()<<endl;
        for(int i:arr){
            cout<<i<<" ";
            
        }
        
        cout<<endl;
        
    
    
}
return 0;
}