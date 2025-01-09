#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k) {
    int s = 0;
    int e = n - 1;
    int store = -1;
    while (s <= e) {
        int m = s + (e - s) / 2; // Prevents potential overflow
        if (arr[m] == k) {
            store = m;   // Store the current index
            e = m - 1;   // Move left to find the first occurrence
        }
        else if (arr[m] < k) {
            s = m + 1;
        }
        else {
            e = m - 1;
        }
    }
    return store; // Return the index of the first occurrence or -1 if not found
}

int main() {
    int arr[7] = {10, 10, 10, 20, 30, 50, 60};
    int n = 7;
    int k = 10;

    int result = binarySearch(arr, n, k);
    if (result != -1) {
        cout << "The first occurrence of k in this array is at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
