#include<iostream>
#include<climits>
using namespace std;
void largest(int **arr,int m,int n){
    int p=INT_MIN,q=INT_MIN,sum,lum,k,l;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
        if(sum>p){
            p=sum;
            k=i;
        }
    }
    for(int j=0;j<n;j++){
        lum=0;
        for(int i=0;i<m;i++){
            lum+=arr[i][j];
        }
        if(lum>q){
            q=lum;
            l=j;
        }
    }
    if(q>p){
        cout<<"col"<<" "<<l<<" "<<q<<endl;
    }
    else{
        cout<<"row"<<" "<<k<<" "<<p<<endl;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int **arr=new int *[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    largest(arr,m,n);
}
