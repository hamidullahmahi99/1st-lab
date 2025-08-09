#include<iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 4, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool visited[n] = {false};

    cout << "{";
    bool first = true;

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
                visited[j] = true;
            }
        }

        if (!first) cout << ", ";
        cout << arr[i] << ": " << count;
        first = false;
    }

    cout << "}" << endl;

    return 0;
}

