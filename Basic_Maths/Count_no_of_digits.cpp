#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    int count=0;
    if(n==0)
    cout<<1;
    else{
    for(int i=0;i<n;i++){
        n /=10;
        count++;
    }}
    cout<<count;
}