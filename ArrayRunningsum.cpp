#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int runningSum[n];

    runningSum[0] = arr[0];

    for (int i = 1; i < n; i++) {
        runningSum[i] = runningSum[i - 1] + arr[i];
    }

    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << runningSum[i];
        if (i != n - 1) cout << ", ";
    }
    cout << "]";

    return 0;
}

