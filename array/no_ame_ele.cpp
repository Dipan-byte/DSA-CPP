#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<int, int> freq; // sorted automatically

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (auto e : freq) {
        cout << e.first << " -> " << e.second << " times" << endl;
    }

    return 0;
}
