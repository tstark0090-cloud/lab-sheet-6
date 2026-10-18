#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];  // array with max size 100
    int sum = 0;

    // Input elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];  // add each element to sum
    }

    // Display sum
    cout << "Sum of all elements = " << sum << endl;

    return 0;
}
