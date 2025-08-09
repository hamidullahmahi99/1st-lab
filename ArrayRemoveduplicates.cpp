#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> uniqueElements;

    for (int i = 0; i < n; i++) {
        uniqueElements.insert(arr[i]);
    }


    for (int num : uniqueElements) {
        cout << num << " ";
    }

    return 0;
}

