#include<iostream>
using namespace std;
int main(){
    int arr[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
