#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    int longest = 0;

    for (int x : s) {
        if (s.find(x - 1) == s.end()) {
            int current = x;
            int length = 1;

            while (s.find(current + 1) != s.end()) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    cout << "Longest Consecutive Length: " << longest;
    return 0;
}
