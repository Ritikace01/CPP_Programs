#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 6, 3, 6, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // make array - hashmap
    for(int i=0; i<n; i++) {
        // store the frequency of each element in the array
        arr[arr[i]%n] = arr[arr[i]%n] + n;
    }
    for(int i=0; i<n; i++) {
        if(arr[i] >= 2*n) {
            cout << i << " ";
        }
    }
    return 0;
}