#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"enter the value of n";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}