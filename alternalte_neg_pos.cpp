#include<iostream>
using namespace std;
void alternate(int arr[],int n){
    int i = 0, j = n-1;
    while (i < j)
    {
        while(i <= n - 1 and arr[i] >= 0)
            i++;
        while (j >= 0 and arr[j] < 0)
            j--;
        if (i < j){
            swap(arr[i], arr[j]);
        }
    }
    if (i == 0 || i == n){
        return;
    }
    int k = 0;
    while (k < n && i < n)
    {
        swap(arr[k], arr[i]);
        i++;
        k = k + 2;
    }
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    alternate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
