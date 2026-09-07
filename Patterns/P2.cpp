#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no of rows and columns:";
    cin>>m;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}