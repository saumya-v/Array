#include<iostream>
using namespace std;
void print2D(int **arr,int m,int n){
    int k=m;
    for(int i=0;i<m;i++){
        for(int l=k-1;l>=0;l--){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        k--;
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
    print2D(arr,m,n);
}
