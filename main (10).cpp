#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int m = s + (e - s) / 2; // Prevents potential overflow
        if (arr[m] == k) {
            return m;
        }
        else if (arr[m] < k) {
            s = m + 1;
        }
        else {
            e = m - 1;
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[6] = {12, 23, 34, 45, 56, 67};
    int n = 6;
    int k = 56;

    int result = binarySearch(arr, n, k);
    if (result != -1) {
        cout << "The index of the target is: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
