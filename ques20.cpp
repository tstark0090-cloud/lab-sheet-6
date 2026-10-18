#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Largest element in a sorted array is at the last index
    int largest = arr[n - 1];

    cout << "The largest element is: " << largest << endl;

    return 0;
}
