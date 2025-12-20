#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> mp;
    int prefixSum = 0, maxLen = 0;

    mp[0] = -1;

    for (int i = 0; i < n; i++) {
        prefixSum += (arr[i] == 0 ? -1 : 1);

        if (mp.find(prefixSum) != mp.end()) {
            maxLen = max(maxLen, i - mp[prefixSum]);
        } else {
            mp[prefixSum] = i;
        }
    }

    cout << "Longest Length: " << maxLen;
    return 0;
}
