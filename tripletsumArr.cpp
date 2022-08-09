#include<iostream>
using namespace std;
int tripsum(int arr[],int n,int k){
    int i,j,c=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
                for(int l=j+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[l]==k){
                        c++;
                    }
                }
        }
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<tripsum(arr,n,k)<<endl;
}


