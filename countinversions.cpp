#include <bits/stdc++.h>
using namespace std;

int mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid,
          int right);

int countinv(int arr[], int n){
    int temp[n];
    return mergeSort(arr, temp, 0, n- 1);
}

int mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;
        /* Inversion count will be sum of
        inversions in left-part, right-part
        and number of inversions in merging */
        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);

        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

/* This func merges two sorted arrays
and returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left, int mid,
          int right)
{
    int i, j, k;
    int inv_count = 0;

    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else {
            temp[k] = arr[j];
            k++;
            j++;
            inv_count = inv_count + (mid - i);
        }
    }

    /* Copy the remaining elements of left subarray(if there are any) to temp*/
    while (i <= mid - 1){
        temp[k] = arr[i];
        k++;
        i++;
}

    /* Copy the remaining elements of right subarray(if there are any) to temp*/
    while (j <= right){
        temp[k] = arr[j];
        k++;
        j++;
    }

    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++){
        arr[i] = temp[i];
    }

    return inv_count;
}
int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = countinv(arr, n);
    cout << " Number of inversions are " << ans;
}
