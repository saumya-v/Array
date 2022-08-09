#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void nextpermutation(int arr[],int n){
    if(n==1){
            return;
        }
        int i=1;
        int lastinc=-1;
        while(i<n){
            if(arr[i]>arr[i-1]){
                lastinc=i;
            }
            i=i+1;
        }
        if(lastinc==-1){
            for(int i=0;i<n/2;i++){
                swap(arr[i],arr[n-i-1]);
            }
            return;
        }
        int m=arr[lastinc];
        int index=lastinc;
        for(i=lastinc;i<n;i++){
            if(arr[i]>arr[lastinc-1] && arr[i]<arr[index]){
                index=i;
            }
        }
        swap(arr[lastinc-1],arr[index]);
        for (int x = lastinc; x < n;x++){
            for (int j = x + 1; j < n; j++){
                if (arr[x] > arr[j]){
                    swap(arr[x],arr[j]);
                    }
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
    nextpermutation(arr,n);
    print(arr,n);
}


