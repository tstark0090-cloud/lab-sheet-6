#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string names[100];
    cout << "Enter " << n << " names:\n";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Bubble Sort for strings
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (names[j] > names[j + 1]) {  // lexicographic comparison
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    // Display sorted names
    cout << "Sorted names (A-Z):\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
