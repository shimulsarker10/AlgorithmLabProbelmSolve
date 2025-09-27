#include <iostream>
using namespace std;

// Recursive function to find maximum
int findMax(int arr[], int n) {
    if (n == 1)   // Base case
        return arr[0];
    return max(arr[n - 1], findMax(arr, n - 1));
}

// Recursive function to find minimum
int findMin(int arr[], int n) {
    if (n == 1)   // Base case
        return arr[0];
    return min(arr[n - 1], findMin(arr, n - 1));
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum element is: " << findMax(arr, n) << endl;
    cout << "Minimum element is: " << findMin(arr, n) << endl;

    return 0;
}
