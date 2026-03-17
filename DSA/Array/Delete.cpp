#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int index = 2; // delete element at index 2 (30)

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // reduce size

    // print updated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}