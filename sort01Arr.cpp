#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void sort01(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int temp=arr[c];
            arr[c]=arr[i];
            arr[i]=temp;
            c++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort01(arr,n);
    printArray(arr,n);
}



