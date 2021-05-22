#include<bits/stdc++.h>
using namespace std;

void getUnion(int arr1[], int arr2[], int n1, int n2)
{
    // use c++ set stl
    set<int> s1;
    for(int i=0; i<n1; i++) {
        s1.insert(arr1[i]);
    }
    for(int i=0; i<n2; i++) {
        s1.insert(arr2[i]);
    }
    // set easily gives the union - takes care of duplicate too
    cout << "Union : ";
    for(auto itr=s1.begin(); itr!=s1.end(); itr++) {
        cout << *itr << " ";
    }

    cout << endl;
}

void getIntersection(int arr1[], int arr2[], int n1, int n2)
{
    int i=0, j=0;
    cout << "Intersection : ";
    while(i<n1 && j<n2) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr2[j] < arr1[i]) {
            j++;
        }
        else { // arr1[i] == arr2[j]
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    getUnion(arr1, arr2, n1, n2);
    getIntersection(arr1, arr2, n1, n2);
    return 0;
}