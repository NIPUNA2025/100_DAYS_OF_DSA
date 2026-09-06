#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter 2 numbers";
    cin>>m;
    cin>>n;
    int sum=0;
    for(int i=m;i<=n;i++){
        sum+=i;
    }
    cout<<"sum of the numbers from "<<m<<"to "<<n<<"="<<sum;
}