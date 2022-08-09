#include<iostream>
using namespace std;
void spiral(int **arr,int m,int n){
    int rs=0,re=m-1,cs=0,ce=n-1,k=0;
    while(k<(m*n)){
        for(int j=cs;j<=ce;j++){
            cout<<arr[rs][j]<<" ";
            k++;
        }
        rs++;
        for(int i=rs;i<=re;i++){
            cout<<arr[i][ce]<<" ";
            k++;
        }
        ce--;
        for(int j=ce;j>=cs;j--){
            cout<<arr[re][j]<<" ";
            k++;
        }
        re--;
        for(int i=re;i>=rs;i--){
            cout<<arr[i][cs]<<" ";
            k++;
        }
        cs++;
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
    spiral(arr,m,n);
}

