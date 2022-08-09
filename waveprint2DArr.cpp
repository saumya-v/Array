#include<iostream>
using namespace std;
void wave(int **arr,int m,int n){
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int **arr=new int*[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    wave(arr,m,n);
}
