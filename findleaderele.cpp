#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxFromRight = arr[n - 1];
    cout << maxFromRight << " ";

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            cout << arr[i] << " ";
        }
    }

    return 0;
}
