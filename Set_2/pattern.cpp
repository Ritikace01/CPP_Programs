#include<bits/stdc++.h>
using namespace std;

void half_pyramid(int rows)
{
    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*"; 
        }
        for(int k=1; k<=(2*rows-2*i); k++) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void reverse_half_pyramid(int rows)
{
    for(int i=rows; i>=1; i--) {
        for(int j=i; j>=1; j--) {
            cout << "*";
        }
        for(int k=1; k<=(2*rows-2*i); k++) {
            cout << " ";
        }
        for(int j=i; j>=1; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int rows = 5;
    // half pyramid
    half_pyramid(rows);
    // reverse half pyramid
    reverse_half_pyramid(rows);
    return 0;
}