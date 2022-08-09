#include<iostream>
using namespace std;
int findarr(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    break;
                }
            }
        }
        if(j==n){
            return arr[i];
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
    cout<<findarr(arr,n);
}


