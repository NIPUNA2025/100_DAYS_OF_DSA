#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter numbers:";
    cin>>n;
    int count=0,temp=n,sum=0;
    while(n>0){
      n/=10;
      count++;
    }
    n=temp;
    while(n>0){
       int c=n%10;
       sum=sum+pow(c,count);
       n=n/10;
    }
    if(sum==temp){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }

}