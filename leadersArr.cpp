#include<iostream>
using namespace std;
void leaders(int arr[],int n){
    for(int i=0;i<n;i++){
        bool smaller=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                smaller=false;
                break;
            }
        }
        if(smaller){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leaders(arr,n);
}
