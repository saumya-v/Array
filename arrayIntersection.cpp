#include<iostream>
#include<climits>
using namespace std;
void intersect(int arr1[],int arr2[],int n1,int n2){
    int i,j;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr1[100];
    int arr2[100];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    intersect(arr1,arr2,n1,n2);
}
