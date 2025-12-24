#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 45, 23, 89, 12};
    int n = 5;
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Largest element = " << max;
    return 0;
}
