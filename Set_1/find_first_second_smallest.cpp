#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, 13, 10, 1, 2, 3};
    int first = INT16_MAX, second = INT16_MAX;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++) 
    {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }
    cout << "First and second small elements : " << first << " , " << second << endl;
    return 0;
}