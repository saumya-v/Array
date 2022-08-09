#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swaparr(int arr[],int n){
    int i=0;
    while(i<n-1){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i=i+2;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swaparr(arr,n);
    print(arr,n);
}

