#include<iostream>
using namespace std;
void arrange(int arr[],int n){
    int i=0;
    int j=n-1;
    int x=1;
    while(i<=j){
        if(x%2==0){
            arr[j]=x;
            j--;
            x++;
        }
        else{
            arr[i]=x;
            i++;
            x++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    arrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
