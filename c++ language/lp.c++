#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter value of n";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (j<=n-i){
                cout<<"";
         }
         else{
            cout<<"*";
         }
        }
        cout<<endl;
    }


} 