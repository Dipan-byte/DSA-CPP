#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "No second largest";
        return 0;
    }

    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max1 = INT_MIN; // largest
    int max2 = INT_MIN; // second largest
    bool hasMax1 = false;
    bool hasMax2 = false;

    for (int i = 0; i < n; i++) {
        int x = arr[i];

        if (!hasMax1 || x > max1) {
            if (hasMax1 && x != max1) {
                max2 = max1;
                hasMax2 = true;
            }
            max1 = x;
            hasMax1 = true;
        } else if (x != max1 && (!hasMax2 || x > max2)) {
            max2 = x;
            hasMax2 = true;
        }
    }

    if (!hasMax2) {
        cout << "No second largest";
    } else {
        cout << max2;
    }

    delete[] arr;
    return 0;
}
