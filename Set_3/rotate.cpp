#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    for(int i=1; i<=d; i++) {
        // rotate one by one
        int temp = arr[0];
        for(int j=0; j<n-1; j++) {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    // finally print the rotated array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } 
    return 0;
}