#include<bits\stdc++.h>
using namespace std;

void print_data(vector<double> data) {
    // printing the data vector after every input
    for(int i=0; i<data.size(); i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int find_median(vector<double> data) 
{
    double median = 0, mid = 0;
    // sort the data first -> nlogn
    sort(data.begin(), data.end());
    cout << "Printing the data after sorting : " << endl;
    print_data(data);
    if(data.size() == 1) return data[0];
    else {
        mid = data.size()/2;
    }
    if(data.size()%2 != 0) median = data[mid];
    else median = (data[mid-1] + data[mid])/2;

    return median;
}

int main()
{
    vector<double> data;
    double input = 0;
    int n = 10; // n -> size of the data stream
    double output = 0;
    for(int i=1; i<=n; i++) {
        cout << "Reading " << i << " th data : " << endl;
        cin >> input;
        // push it to data
        data.push_back(input);
        cout << "Printing data right after input : " << endl;
        print_data(data);
        // call the function to get median
        output = find_median(data);
        cout << "Median for " << i << " data : " << output << endl;
    }
    return 0;
}