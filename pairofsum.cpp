#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    unordered_set<int> s;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (s.find(target - arr[i]) != s.end()) {
            cout << "Pair found: " << target - arr[i] << " " << arr[i];
            found = true;
            break;
        }
        s.insert(arr[i]);
    }

    if (!found)
        cout << "No pair found";

    return 0;
}
