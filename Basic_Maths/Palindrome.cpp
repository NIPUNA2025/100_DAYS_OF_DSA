#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    int rev_num=0,count=0;
    int temp=n;
    if(n<0){
        cout<<"Not a palindrome";
    }
    if(n>0){
    while(n>0){
         n /=10;
        count++;
    }
    n=temp;
    while(n>0){
        int a=n%10;
        rev_num=rev_num*10+a;
        n=n/10;
        count--;
    }
    n=temp;
if(n==rev_num){
    cout<<"Palindrome";
}
else{
    cout<<"Not a palindrome";
}}
}