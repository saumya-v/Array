#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int median(int arr1[],int arr2[],int m,int n){
    int arr3[m+n];
    int l=m+n;
    for(int k=0;k<m;k++)
        {
            arr3[k]=arr1[k];
        }

        int a=0;
        for(int k=m;k<l;k++)
        {
            arr3[k]=arr2[a++];
        }

        // Sort the merged array
        sort(arr3,arr3+l);
        if (l % 2 == 0){
            int z = l / 2;
            int e = arr3[z];
            int q = arr3[z - 1];
            int ans = (e + q) / 2;
            return ans;
     }

     // If length if array is odd
    else
     {
       int z = round(l / 2);
       return arr3[z];
     }
}
int main(){
    int arr1[] = { -5, 3, 6, 12, 15 };
    int arr2[] = { -12, -10, -6, -3, 4, 10 };
    int m =  sizeof(arr1) / sizeof(arr1[0]);
    int n =  sizeof(arr2) / sizeof(arr2[0]);
    cout<<median(arr1,arr2,m,n);

}
