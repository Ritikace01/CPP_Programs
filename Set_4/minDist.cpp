#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3, y = 6;
    int dist = INT16_MAX, idx = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == x || arr[i] == y) {
            if(idx != -1 && arr[i] != arr[idx]) {
                dist = min(dist, i-idx);
            }
            idx = i;
        }
    }
    cout << "Min distance : " << dist << endl;
    return 0;
}