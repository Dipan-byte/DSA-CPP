#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int S;
    cin >> S;

    int left = 0, sum = 0;
    int minLen = INT_MAX;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum >= S) {
            minLen = min(minLen, right - left + 1);
            sum -= arr[left++];
        }
    }

    if (minLen == INT_MAX)
        cout << "0";
    else
        cout << "Minimum Length: " << minLen;

    return 0;
}
