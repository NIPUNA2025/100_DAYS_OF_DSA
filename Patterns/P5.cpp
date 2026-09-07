#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no of rows and columns:";
    cin>>m;
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}