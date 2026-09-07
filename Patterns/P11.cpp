#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<j+1;
        }
        cout<<"\n";
        for(int j=n;j<2*n-2*i-1;j++){
             cout<<"-";
        }
    }
}