#include<iostream>
using namespace std;
struct Pair{
    int min;
    int max;
};
struct Pair getminmax(int arr[],int n){
    struct Pair minmax;
    int i;
    if(n==1){
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
    }
    if(arr[0]>arr[1]){
        minmax.min=arr[1];
        minmax.max=arr[0];
    }
    else{
        minmax.min=arr[0];
        minmax.max=arr[1];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>minmax.max){
            minmax.max=arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min=arr[i];
        }
    }
    return minmax;
};
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    struct Pair minmax=getminmax(arr,n);
    cout<<"min:"<<minmax.min<<endl;
    cout<<"max:"<<minmax.max<<endl;
}
