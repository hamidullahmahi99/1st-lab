#include<iostream>
using namespace std;

int main() {
    int arr[] = {4, 1, 7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int SecondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }


    SecondLargest = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > SecondLargest) {
            SecondLargest = arr[i];
        }
    }

    cout << "Second largest element: " << SecondLargest << endl;

    return 0;
}

