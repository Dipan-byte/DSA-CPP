#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++)
        freq[arr[i]]++;

    bool found = false;

    for(int i = 0; i < n; i++){
        if(freq[arr[i]] > 1){
            cout << "First Repeating Element: " << arr[i];
            found = true;
            break;
        }
    }

    if(!found) cout << "No repeating element";

    return 0;
}
