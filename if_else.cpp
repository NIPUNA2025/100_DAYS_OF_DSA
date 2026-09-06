#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks";
    cin>>marks;
    if(marks>=90){
        cout<<"grade A";
    }
    else if(marks>=70){
        cout<<"grade B";
    }
    else if(marks>=50){
        cout<<"grade C";
    }
    else{
        cout<<"Grade D";
    }
}