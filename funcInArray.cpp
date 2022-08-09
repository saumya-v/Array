#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sizeof(arr)<<endl;
    print(arr,n);
}
