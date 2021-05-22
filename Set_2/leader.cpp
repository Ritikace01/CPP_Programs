#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int leader = arr[size-1]; // since rightmost ele is always the leader
    cout << leader << " ";
    for(int i=size-2; i>=0; i--) {
        if(leader < arr[i]) {
            // found a new leader 
            leader = arr[i];
            cout << leader << " ";
        }
    }
    return 0;
}