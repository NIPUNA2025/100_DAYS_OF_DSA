#include<iostream>
using namespace std;
void reverse_array(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cout << "enter size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "enter arr[" << i << "]:";
        cin >> arr[i];
    }
    reverse_array(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}