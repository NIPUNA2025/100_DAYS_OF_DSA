#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no of rows and columns:";
    cin>>m;
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<m-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<m;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }
        for(int j=0;j<2*m-2*i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
