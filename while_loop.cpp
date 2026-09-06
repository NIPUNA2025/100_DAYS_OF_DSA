#include<iostream>
using namespace std;
int main(){
    int d;
    cout<<"enter digit : "; 
    cin>>d;
    int start=(d==0)?10:d;
    int current=start;
    int sum=0;
    int count=0;
    while(count<50){
         sum+=current;
        current+=10;
        count++;
    }
    cout<<"Sum of the first 50 numbers ending with "<<d<<" is "<<sum;
}