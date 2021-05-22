#include<bits/stdc++.h>
using namespace std;

void mergeFunc(int arr[], int l, int m, int r)
{
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1], R[n2];

    // copying the elements into L & R
    for(int i=0; i<n1; i++) {
        L[i] = arr[l+i];
    }
    for(int j=0; j<n2; j++) {
        R[j] = arr[m+1+j];
    }

    // merge the temp arrays
    int i=0, j=0, k=l;
    while(i<n1 && j<n2) {
        if(L[i] < R[j]) {
            arr[k] = L[i];
            i++; 
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copy the (if any) remaining elements
    while(i<n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l>=r) {
        return;
    }
    int mid = l + (r-l)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    mergeFunc(arr, l, mid, r);
}

int main()
{
    int arr[] = {1, 60, -10, 70, -80, 85};
    int n = sizeof(arr)/sizeof(arr[0]);
    // sort the array first
    mergeSort(arr, 0, n-1);
    // print the array after sorting
    cout << "After merge sort : ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // maintain two index for start and end pos of array
    int idx1 = 0, idx2 = n-1;
    int minSum = INT16_MAX, minL=0, minR=0, sum=0;
    while(idx1 < idx2) {
        sum = arr[idx1] + arr[idx2];
        if(abs(sum) < abs(minSum)) {
            minSum = sum;
            minL = idx1;
            minR = idx2;
        }
        if(sum < 0) {
            idx1++;
        }
        else {
            idx2--;
        }
    }
    cout << "Min sum : " << minSum << endl;
    cout << "2 elements : " << arr[minL] << " , " << arr[minR] << endl;
    return 0;
}