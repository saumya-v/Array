#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void reversearray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6};
    int n=10;
    reversearray(arr,10);
    print(arr,n);
}
